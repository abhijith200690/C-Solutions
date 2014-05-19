#include <stdio.h>
#include <string.h>
char lower(char x) {
	return x >= 'A' && x <= 'Z' ? 'a' + (x - 'A') : x;
}

int main() {
	char test[] = "AabB!@#CCdeZZXx";
	for (int i = 0; i < strlen(test); ++i) {
		printf("%c to lower %c\n", test[i], lower(test[i]));
	}
	return 0;
}