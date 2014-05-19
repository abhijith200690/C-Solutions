#include <stdio.h>

int any(char *s1, char *s2) {
	char exists[256] = {0};
	int i;
	for (i = 0; s2[i] != '\0'; ++i) {
		exists[s2[i]] = 1;
	}

	int j = 0;
	for (i = 0; s1[i] != '\0'; ++i) {
		if(exists[s1[i]]) {
			return i;
		}
	}
	return -1;
}

int main() {
	printf("First pos = %d\n", any("apple", "orange"));

	printf("First pos = %d\n", any("tomtom", "orange"));

	printf("First pos = %d\n", any("bloodyorange", "orange"));

	printf("First pos = %d\n", any("orange", "orange"));

	printf("First pos = %d\n", any("one", "six"));

	return 0;
}