#include <stdio.h>

void squeeze(char *s1, char *s2) {
	char exists[256] = {0};
	int i;
	for (i = 0; s2[i] != '\0'; ++i) {
		exists[s2[i]] = 1;
	}

	int j = 0;
	for (i = 0; s1[i] != '\0'; ++i) {
		if(!exists[s1[i]]) {
			s1[j++] = s1[i];
		}
	}
	s1[j] = '\0';
}

int main() {
	char str1[8] = "apple";
	char str2[8] = "tomtom";
	char str3[16] = "bloodyorange";
	char str4[8] = "orange";

	squeeze(str1, "orange");
	puts(str1);

	squeeze(str2, "orange");
	puts(str2);

	squeeze(str3, "orange");
	puts(str3);

	squeeze(str4, "orange");
	puts(str4);

	return 0;
}