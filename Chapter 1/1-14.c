#include <stdio.h>
#define MAX_CHAR_SIZE 256

int main() {
	char counts[MAX_CHAR_SIZE] = {0};
	char c;
	int start = MAX_CHAR_SIZE;
	int end = 0;

	while((c = getchar()) != EOF) {
		counts[c] += 1;
		if(c < start) {
			start = c;
		}
		if(c > end) {
			end = c;
		}
	}

	int i;
	for (i = start; i <= end; ++i)	{
		printf("%c: ", i);
		int j;
		for (j = 0; j < counts[i]; ++j) {
			printf("=");
		}
		printf("\n");
	}
}