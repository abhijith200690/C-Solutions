#include <stdio.h>

float fahr_to_celsius(float fahr) {
	return (fahr - 32) * 5.0 / 9.0;
}

int main() {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	printf("Fahrenheit\tCelsius\n");
	while(fahr <= upper) {
		printf("%3.0f\t\t%6.1f\n", fahr, fahr_to_celsius(fahr));
		fahr += step;
	}
}
