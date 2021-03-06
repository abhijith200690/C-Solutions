#include <stdio.h>

void reverse(char *str, int len) {
	for (int i = 0; i < len / 2; ++i) {
		char tmp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = tmp;
	}
}

void itoa(int n, char *s) {
	int neg = 0;
	unsigned x = n;
	if(n < 0) {
		neg = 1;
		x = -n;
	}

	int pos = 0;
	while(x) {
		s[pos++] = '0' + x % 10;
		x /= 10;
	}
	if(neg) {
		s[pos++] = '-';
	}
	s[pos] = '\0';
	reverse(s, pos);
	
}

int main() {
	char str[100];

	itoa(-120, str);
	puts(str);

	itoa(123456, str);
	puts(str);

	itoa(-2147483648, str);
	puts(str);

	return 0;
}