// Assumes that the input is a syntactically correct c program.

#include <stdio.h>
#include <assert.h>

void consume_quoted_string() {
	//puts("entered consume_quoted_string");
	char c;
	while((c = getchar()) != EOF) {
		putchar(c);
		if(c == '"') {
			break;
		}
		if(c == '\\') {
			// consume the escape character
			putchar(getchar());
		}
	}
	//puts("exiting consume_quoted_string");
}

void consume_char_const() {
	//puts("entered consume_char_const");
	char c = getchar();
	putchar(c);
	if(c == '\\') {
		putchar(getchar());
	}
	c = getchar();
	putchar(c);
	assert(c == '\'');
	//puts("exiting consume_char_const");
}

void consume_comment() {
	//puts("entered consume_comment");
	char c;
	while((c = getchar()) != EOF) {
		if(c == '*') {
			if(getchar() == '/') {
				break;
			}
		}
	}
	//puts("exiting consume_comment"); 
}


int main() {
	char c, n;

	while((c = getchar()) != EOF) {
		if(c == '"') {
			putchar(c);
			consume_quoted_string();
		} else if(c == '\'') {
			putchar(c);
			consume_char_const();
		} else {
			if(c == '/') {
				puts("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~OOO~~~~~~~~~~~~~~~");
				n = getchar();
				if(n == '*') {
					consume_comment();
				} else {
					putchar(c);
					putchar(n);
				}
			} else {
				putchar(c);
			}
		}

	}
}