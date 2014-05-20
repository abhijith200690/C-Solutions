#include <stdio.h>
#define MAX_LENGTH 1001

int get_line(char *arr) {
	char c;
    int len = 0;
    while((c = getchar()) != EOF) {
        if(c == '\n') {
                break;
        }
        if(len < MAX_LENGTH) {
        	arr[len] = c;
        }
        len += 1;
    }
    return len;
}

void copy(char *from, char *to, int size) {
	for (int i = 0; i <= size && i < MAX_LENGTH - 1; ++i) {
		to[i] = from[i];
	}
	to[MAX_LENGTH - 1] = 0;
}

int main() {
	char str[MAX_LENGTH];
	int len;
	char longest_line[MAX_LENGTH];
	int longest_line_len = 0;

	while((len = get_line(str)) > 0) {
		if(len > longest_line_len) {
			longest_line_len = len;
			copy(str, longest_line, len);
		}
	}
	printf("Len = %d\n", longest_line_len);
	printf("Line = %s\n", longest_line);
	return 0;
}
