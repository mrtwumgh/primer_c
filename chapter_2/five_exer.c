#include <stdio.h>

int main(void)
{
	double age, result;

	printf("Enter your age: ");
	
	scanf("%lf", &age);

	result = age * 3.156e7;

	printf("Age in seconds is %e\n", result);

	return (0);
}
