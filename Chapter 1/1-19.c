#include <stdio.h>
#define MAX_LENGTH 1000

void reverse(char *str, int size) {
	for (int i = 0; i < size / 2; ++i) {
		char tmp = str[i];
		str[i] = str[size - i - 1];
		str[size - i - 1] = tmp;
	}
}

int get_line(char *arr) {
	char c;
	int len = 0;
	while((c = getchar()) != EOF) {
		if(c == '\n') {
			break;
		}
		arr[len++] = c;
	}
	return len;
}

int main() {
	char str[MAX_LENGTH];
	int len = get_line(str);
	reverse(str, len);
	puts(str);
	return 0;
}