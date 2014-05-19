#include <stdio.h>

unsigned get_last(unsigned x, int n) {
	return (x << (8 * sizeof(int) - n)) >> (8 * sizeof(int) - n);
}

int setbits(int x, int p, int n, int y) {
	// get last p - n + 1 bits of x
	int last_x = get_last(x, p - n + 1);

	// clear last p + 1 bits of x
	x ^= get_last(x, p + 1);

	// left shift last n digits of y by p - n + 1
	int last_y_shifted = get_last(y, n) << (p - n + 1);

	// set intermediate bits
	x |= last_y_shifted;

	// set last bits
	x |= last_x;

	return x;
}

unsigned setbitsi(unsigned x, int p, int n, unsigned y)
{
  return (x & ((~0 << (p + 1)) | (~(~0 << (p + 1 - n))))) | ((y & ~(~0 << n)) << (p + 1 - n));
}

int main() {
	int x = 1493749823;
	int p = 6;
	int n = 3;
	int y = 1234320893;

	printf("%u\n%u\n", setbits(x, p, n, y), setbitsi(x, p, n, y));
	return 0;
}