#include <stdio.h>
#define MAX_LENGTH 100

int main() {
	char str[MAX_LENGTH];
	int pos;
	char c;

	pos = 0;
	while(pos < MAX_LENGTH) {
		c = getchar();
		if(c == EOF) {
			break;
		}
		if(c == '\n') {
			break;
		}
		str[pos++] = c;
	}
	str[pos] = '\0';
	puts(str);
}