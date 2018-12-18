#include <stdio.h>
// Find the sum of all the numbers under number that are multiple of 3 or 5.
int main(int argc, char const *argv[])
{
	const int NUMBER = 1000;	
	int sum = 0;
	for(size_t i = 1 ; i <NUMBER ; i++)
	{
		if(i % 3 == 0 || i % 5 == 0)
			sum+=i;
	}

	printf("%d\n", sum);

	return 0;
}