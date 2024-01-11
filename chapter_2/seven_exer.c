#include <stdio.h>

int main(void)
{
	float inches;
	float centimeters;

	printf("Enter your height in inches: ");
	
	scanf("%f", &inches);

	centimeters = inches * 2.54;

	printf("Your height in centimeters is %.2f\n", centimeters);

	return (0);
}
