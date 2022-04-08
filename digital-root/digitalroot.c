#include <stdio.h>
#include <math.h>

/* this is unfinished and possibly will stay as such */

int countNumbers(int num) 
{
	return floor(log10(abs(num))) + 1;
}

int add(int num)
{
	int result = 0;

	for(int i = 0; i > countNumbers(num); i++) 
	{
		result = result + num[i];
	}

	return result;
}
int main() 
{
	int number[3];
	number[0] = 1;
	number[1] = 2;
	number[2] = 3;
	number[3] = 4;

	int amountOfNumbers = countNumbers(number);
	int result = add(number);
	
	printf("%d\n", result);
	
	while (countNumbers(result) > 2) {
		result = add(result);
	}

	return 0;
}

