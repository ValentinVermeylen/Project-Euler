#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// Find the sum of all the primes below two million.

int isPrime(long long number)
{
	for(long long i = 2 ; i <= sqrt(number) ; i++)
		if(number%i == 0)
			return 0;

	return 1;
}

int main(int argc, char const *argv[])
{
	unsigned long long sum = 2;
	for(long long i = 3 ; i <= 2000000 ; i++)
	{
		if(isPrime(i))
		{
			//printf("%d\n", i);
			sum += i;
		}
	}

	printf("%llu\n", sum);
	return 0;
}