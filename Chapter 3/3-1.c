#include <stdio.h>

int binsearch(const int *arr, const int arr_size, const int to_find) {
	int low, mid, high;
	low = 0;
	high = arr_size - 1;

	while(low + 1 < high) {		// atleast two places apart
		mid = low + (high - low) / 2;
		if(arr[mid] <= to_find) {
			low = mid;
		} else {
			high = mid - 1;
		}
	}
	if(arr[low] == to_find) {
		return low;
	} else if(arr[high] == to_find){
		return high;
	} else {
		return -1;
	}
}

int main() {
	int arr[] = {1, 3, 4, 6, 8, 9};

	printf("%d\n", binsearch(arr, 6, 1));
	printf("%d\n", binsearch(arr, 6, 3));
	printf("%d\n", binsearch(arr, 6, 4));
	printf("%d\n", binsearch(arr, 6, 6));
	printf("%d\n", binsearch(arr, 6, 8));
	printf("%d\n", binsearch(arr, 6, 9));
	return 0;
}