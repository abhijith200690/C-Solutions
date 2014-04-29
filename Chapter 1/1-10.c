#include <stdio.h>

int main() {
	char curr;
	while((curr = getchar()) != EOF) {
		if(curr == '\t') {
			putchar('\\');
			putchar('t');
		} else if(curr == '\b') {
			putchar('\\');
			putchar('b');
		} else if(curr == '\\') {
			putchar('\\');
			putchar('\\');
		} else {
			putchar(curr);
		}
	}
	return 0;
}