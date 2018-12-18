#include <math.h>
#include <stdio.h>
#include <stdlib.h>
// Determine the largest palindrome made from the product of two 3-digit numbers

int * toArray(int number, int* size)
{
	int n = log10(number) + 1;
	*size = n;
	int* array = malloc(n * sizeof(int));
	for(int i = 0 ; i < n ; i++)
	{
		array[i] = (number%10);
		number /= 10;
	}
	return array;
}

int isPal(long number)
{
	int size;
	int* array = toArray(number, &size);
	for(int i = 0 ; i <= ceil(size/2) ; i++)
	{
		if(array[i] != array[size-i-1])
			return 0;
	}

	return 1;
}

int main(int argc, char const *argv[])
{
	int number1 = 999;
	int number2 = 999;
	long max = 0;
	for(int i = number1 ; i > 0 ; i--)
	{
		for(int j = i ; j > 0 ; j--)
		{
			if(isPal(i*j) && (i*j) > max)
				max = i*j;
		}
	}
	printf("%ld\n", max);
	return 0;
}