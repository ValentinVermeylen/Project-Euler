#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// Find the 10 001st prime number.

int isPrime(int number)
{
	for(int i = 2 ; i <= sqrt(number) ; i++)
		if(number%i == 0)
			return 0;

	return 1;
}

int main(int argc, char const *argv[])
{
	int i = 0;
	int number = 2;
	while(i != 10001)
	{
		if(isPrime(number))
			i++;
		number++;
	}

	printf("%d", number-1);
	return 0;
}