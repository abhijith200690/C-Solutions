#include <stdio.h>

int main() {
	char c;
	int blanks = 0;
	int tabs = 0;
	int new_lines = 0;
	while((c = getchar()) != EOF) {
		if(c == ' ') {
			blanks += 1;
		}
		if(c == '\t') {
			tabs += 1;
		}
		if(c == '\n') {
			new_lines += 1;
		}
	}
	printf("Blanks = %d, Tabs = %d, New lines = %d\n", blanks, tabs, new_lines);
}