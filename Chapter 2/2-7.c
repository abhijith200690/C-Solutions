#include <stdio.h>

unsigned get_last(unsigned x, int n) {
	return (x << (8 * sizeof(int) - n)) >> (8 * sizeof(int) - n);
}

unsigned invert(unsigned x, int p, int n) {
	// create mask with all p + 1 bits set
	int mask = ((1 << (p + 1)) - 1);

	// clear the last p - n + 1 bits
	int last = get_last(mask, p - n + 1);
	mask ^= last;

	return x ^ mask;
}

int main() {
	printf("%u\n", invert(1983748, 6, 2));
	return 0;
}