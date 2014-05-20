#include <stdio.h>

void escape(const char *src, char *dest) {
	int pos = 0;
	for (int i = 0; src[i]; ++i) {
		switch(src[i]) {
			case '\n':
				dest[pos++] = '\\';
				dest[pos++] = 'n';
				break;
			case '\t':
				dest[pos++] = '\\';
				dest[pos++] = 't';
				break;
			default:
				dest[pos++] = src[i];
		}
	}
	dest[pos] = 0;
}

int main() {
	char dest[100];
	escape("abhijith\treddy\n\n", dest);
	puts(dest);
	return 0;
}