#include <stdio.h>

int main(void)
{
	double volume;
	double pint;
	double tablespoons;
	double teaspoons;

	printf("Enter your volume measurement: ");
	
	scanf("%lf", &volume);

	pint = volume / 16.0;

	tablespoons = volume * 2;

	teaspoons = volume * 2 * 3;

	printf("Here is your volume measurement in: ");
	printf("pints: %.2lf\ntablespoons: %.2lf\nteaspoons: %.2lf\n", pint, tablespoons, teaspoons);

	return (0);
}
