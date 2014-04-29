#include <stdio.h>
#define MAX_SIZE 80
#define STORE 0
#define NO_STORE 1

int main(int argc, char const *argv[]) {
	char c, buff[MAX_SIZE];
	int len = 0;
	int mode = STORE;

	// read until size is 80
	while((c = getchar()) != EOF) {
		if(c == '\n') {
			len = 0;
			mode = STORE;
			continue;
		}
		if(mode == STORE) {
			// we've reached max size
			if(len == MAX_SIZE) {
				// flush the buffer
				int i;
				for (i = 0; i < len; ++i) {
					putchar(buff[i]);
				}

				// print the current character
				putchar(c);

				// switch to NO_STORE mode
				mode = NO_STORE;
			}
		} else {
			putchar(c);
		}
		buff[len++] = c;
	}
	return 0;
}