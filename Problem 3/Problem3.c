#include <stdio.h>

// Find the greatest prime divisor of a given number.
int isPrime(int a);

int main(int argc, char const *argv[])
{
	long long NUMBER = 600851475143;
	long long max = 1;
	long long j = 2;
	while(NUMBER != 1)
	{
		for(int i = j ; i <= NUMBER ; i++)
		{
			if( NUMBER%i == 0 )
			{
				NUMBER = NUMBER / i;
				if(isPrime(i) && i > max)
					max = i;
				j = i+1;
				goto next;
			}
		}
		next: ;
	}

	printf("%ld\n", max);
	return 0;
}

int isPrime(int a)
{
	for(int i = 2 ; i < a ; i++)
		if(a%i == 0)
			return 0;

	return 1;
}