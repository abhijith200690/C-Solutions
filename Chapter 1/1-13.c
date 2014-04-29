#include <stdio.h>
#define MAX_WORD_SIZE 100

int main() {
	int counts[MAX_WORD_SIZE] = {0};
	int i;
	char c;
	int prev_was_space = 0;
	int word_len = 0;
	int max_word_len = 0;

	/* build histogram */
	while((c = getchar()) != EOF) {
		if(c == ' ' || c == '\t' || c == '\n') {
			if(prev_was_space) {
				continue;
			}
			counts[word_len] += 1;
			if(word_len > max_word_len) {
				max_word_len = word_len;
			}
			word_len = 0;
			prev_was_space = 1;
		} else {
			word_len += 1;
			prev_was_space = 0;
		}
	}
	if(word_len != 0) {
		counts[word_len] += 1;
		if(word_len > max_word_len) {
			max_word_len = word_len;
		}
		word_len = 0;
	}

	/* print histogram */
	for (i = 1; i <= max_word_len; ++i) {
		printf("%d: ", i);
		int j;
		for (j = 0; j < counts[i]; ++j) {
			printf("=");
		}
		printf("\n");
	}

	return 0;
}