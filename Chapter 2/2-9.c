#include <stdio.h>

/*
	num &= (num - 1) clears the last '1' 
	Why ?
	Say the last bit of num is 1, then num - 1 is that last bit cleared.
	If it isn't the its taken from its neighbouring (left) one and if that
	isnt set either then the next left and so on.
*/
int bitcount(int num) {
	int ans = 0;
	while(num != 0) {
		ans += 1;
		num &= (num - 1);
	}
	return ans;
}

int main() {
	for (int i = 0; i < 16; ++i) {
		printf("Bitcount[%d] = %d\n", i, bitcount(i));
	}
	return 0;
}