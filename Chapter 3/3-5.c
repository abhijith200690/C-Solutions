#include <stdio.h>

void reverse(char *str, int len) {
	for (int i = 0; i < len / 2; ++i) {
		char tmp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = tmp;
	}
}

void itob(int n, char *str, int base) {
	static const char *rep = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int pos = 0;
	int sign = 1;
	if(n < 0) {
		n = - n;
		sign = -1;
	}
	while(n) {
		int res = n % base;
		str[pos++] = rep[n % base];
		n /= base;
	}
	if(sign < 0) {
		str[pos++] = '-';
	}
	reverse(str, pos);
	str[pos] = '\0';
}

int main() {
	char str[100];
	itob(14291, str, 16);
	puts(str);

	itob(255, str, 2);
	puts(str);

	itob(15000, str, 10);
	puts(str);

	itob(25025, str, 32);
	puts(str);

	itob(-215109, str, 16);
	puts(str);

	return 0;
}