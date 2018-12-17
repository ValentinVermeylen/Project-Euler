#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int numberOfDivisors(long long int c){
	int count = 0;
	for(long long int i = 1 ; i <= sqrt(c) ; i++){
		if(c%i == 0)
			count++;
	}
	count += 1;
	printf("%d\n", count);
	return count;
}

int main(int argc, char const *argv[])
{
	int cont = 0;
	long long int count = 1;
	for(long long int i = 2 ;; i++)
	{
		if(numberOfDivisors(count) < 500)
		{
			count += i;
		}
		else {
			printf("%llu\n", count);
			cont = 1;
			return 0;
		}
	}
}