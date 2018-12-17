#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// Find the smallest number that is divisible by all numbers from 1 to 20.

void incrementNumber(int* number, int i);

void incrementNumber(int* number, int i)
{
	for(int j = 1 ; j <= i ; j++)
	{
		if(i%j == 0 && *number%i != 0)
		{
			*number *= j;
			i = i/j;
		}
	}
	return;
}

int main(int argc, char const *argv[])
{
	int number = 1;
	for(int i = 1 ; i < 20 ; i++)
	{
		if(number % i != 0)
			incrementNumber(&number, i);
	}
	printf("%d\n", number);
	return 0;
}