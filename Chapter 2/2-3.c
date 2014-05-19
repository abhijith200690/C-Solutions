#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int htoi(char *str) {
	int len = strlen(str);
	int num = 0;
	int end = 0;

	// strip starting '0x' or '0X'
	if(len > 2 && str[0] == '0' && tolower(str[1]) == 'x') {
		end = 2;
	}
	for(int i = len - 1; i >= end; i--) {
		char c = str[i];
		if(c >= '0' && c <= '9') {
			num += (c - '0') * (int) pow(16.0, len - i - 1);
		} else {
			c = tolower(c);
			num += (10 + c - 'a') * (int) pow(16.0, len - i - 1);
		}
	}
	return num;
}

int main() {
	printf("%d\n", htoi("0xAB"));
	printf("%d\n", htoi("0xAbabA"));
	return 0;
}