#include <stdio.h>
// Solution to find the sum of all even-valued terms of the Fibonacci sequence (stopping before the value 4 000 000 in the sequence).
int main(int argc, char const *argv[])
{
	unsigned int prev = 2, pprev = 1;
	unsigned int curr = prev + pprev;
	unsigned int sum = prev;
	while( (prev + pprev) < 4000000 ) 
	{
		int t = prev;
		pprev = prev;
		prev = curr;
		curr += t;
		if(curr % 2 == 0)
			sum += curr;
	}

	printf("%d\n", sum);

	return 0;
}