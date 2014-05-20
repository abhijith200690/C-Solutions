#include <stdio.h>
#include <string.h>
#include <ctype.h>

void expand(const char *shand, char *dest) {
	int len = strlen(shand);
	int ptr = 0;
	int pos = 0;
	while(ptr < len) {
		char curr = shand[ptr];
		char next = ptr + 1 < len ? shand[ptr + 1] : -1;
		char next_next = ptr + 2 < len ? shand[ptr + 2] : -1;

		if(isdigit(curr) && next == '-' && isdigit(next_next)) {
			char start = curr;
			char end = next_next;
			ptr += 3;

			while(ptr + 1 < len && shand[ptr] == '-' && isdigit(shand[ptr + 1])) {
				end = shand[ptr + 1];
				ptr += 2;
			}

			for (int i = start; i <= end; ++i) {
				dest[pos++] = i;
			}
		} else if(islower(curr) && next == '-' && islower(next_next)) {
			char start = curr;
			char end = next_next;
			ptr += 3;

			while(ptr + 1 < len && shand[ptr] == '-' && islower(shand[ptr + 1])) {
				end = shand[ptr + 1];
				ptr += 2;
			}

			for (int i = start; i <= end; ++i) {
				dest[pos++] = i;
			}
		} else {
			dest[pos++] = shand[ptr++];
		}
	}
	dest[pos] = '\0';
}

int main() {
	char dest[100];
	expand("a-b-c-f0-9ABC145def0-3-6", dest);
	puts(dest);

	return 0;
}