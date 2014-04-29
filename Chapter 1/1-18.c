#include <stdio.h>
#define MAX_BUFF_SIZE 1001

int main() {
	char c;
	char buff[MAX_BUFF_SIZE];
	int ptr = 0;

	int trailing_spaces = 0;
	
	while((c = getchar()) != EOF) {
		if(c == '\n') {
			ptr = 0;
			continue;
		}
		if(c == ' ' || c == '\t') {
			buff[ptr++] = c;
			continue;
		} else {
			// flush the buffer
			int i;
			for (i = 0; i < ptr; ++i)	{
				putchar(buff[i]);
			}
			ptr = 0;

			putchar(c);
		}
	}

	return 0;
}