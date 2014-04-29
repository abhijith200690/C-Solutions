#include <stdio.h>

int main() {
	int prev_was_empty  = 0;
	char c;

	while((c = getchar()) != EOF) {
		if(c == ' ' || c == '\t' || c == '\n') {
			if(prev_was_empty) {
				continue;
			}
			putchar('\n');
			prev_was_empty = 1;
		} else {
			putchar(c);
			prev_was_empty = 0;
		}
	}

	return 0;
}