
#include <stdio.h>

int main(void)
{
	double water;
	double mol_of_water = 3e-23;
	double result;

	printf("Enter amount of water in quartz: ");
	scanf("%lf", &water);

	result = water / mol_of_water;

	printf("The number of water molecules is %e\n", result);
	printf("Also %.2lf\n", result);

	return (0);
}
