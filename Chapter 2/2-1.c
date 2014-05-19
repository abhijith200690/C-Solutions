#include <stdio.h>
#include <limits.h>

int main() {
	
	printf("Signed int min = %d\n", INT_MIN);
	printf("Signed int max = %d\n", INT_MAX);
	printf("Signed char min = %d\n", CHAR_MIN);
	printf("Signed char max = %d\n", CHAR_MAX);
	printf("Signed short min = %d\n", SHRT_MIN);
	printf("Signed short max = %d\n", SHRT_MAX);
	printf("Signed long min = %ld\n", LONG_MIN);
	printf("Signed long max = %ld\n", LONG_MAX);

	printf("Unsigned int max = %ud\n", UINT_MAX);
	printf("Unsigned char max = %d\n", UCHAR_MAX);
	printf("Unsigned short max = %d\n", USHRT_MAX);
	printf("Unsigned long max = %lu\n", ULONG_MAX);

	return 0;
}