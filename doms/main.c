#include <stdio.h>

// Convert temperature to Kelvin
int toKelvin(int celcius) {
	int kelvin=0;
	kelvin = celcius + 273;
	return kelvin;
}

int main() {

	printf("%d in Celcius is %d in Kelvin\n", 10, toKelvin(10));
	printf("%d in Celcius is %d in Kelvin\n", 23, toKelvin(23));
	printf("%d in Celcius is %d in Kelvin\n", 50, toKelvin(50));

	return 0;
}