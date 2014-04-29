#include <stdio.h>

int main() {
	int prev_was_space = 0;
	char curr;
	while((curr = getchar()) != EOF) {
		if(prev_was_space && curr == ' ') {
			continue;
		}
		putchar(curr);
		prev_was_space = (curr == ' ');
	}
	return 0;
}