#include <stdio.h>

int main() {
	float fahr, celsius;
	int lower, upper, step;

	lower = 300;
	upper = 0;
	step = -20;

	for(fahr = lower; fahr >= upper; fahr += step) {
		celsius = (5.0)/(9.0) * (fahr - 32);
		printf("%3.0f\t\t%6.1f\n", fahr, celsius);		
	}
}
