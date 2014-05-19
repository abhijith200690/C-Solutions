#include <stdio.h>

unsigned rightrot(unsigned x, unsigned n) {
	unsigned most_neg = 1 << (8 * sizeof(int) - 1);
	for (int i = 0; i < n; ++i) {
		if(x & 1) {
			x = (x >> 1) | most_neg;
		} else {
			x >>= 1;
		}
	}
	return x;
}

int main() {
	printf("%u %u\n", rightrot(10, 2));
	printf("%u %u\n", rightrot(45, 4));
	printf("%u %u\n", rightrot(450, 7));
	return 0;
}