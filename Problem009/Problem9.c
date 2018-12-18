#include <math.h>
#include <stdio.h>
#include <stdlib.h>

//  Find the Pythagorean triplet such that a+b+c = 1000. What is abc ?

int main(int argc, char const *argv[])
{
	long a = 1, b = 2, c = 3;

	while(!((a*a + b*b == c*c) && (a + b + c == 1000)))
	{
		if(a != 997)
			a++;
		else
		{
			a = 1;
			if(b != 998)
				b++;
			else 
			{
				b = 2;
				if(c != 999)
					c++;
				else 
					return 0;
			}
		}
	}

	printf("%d, %d, %d, %d\n", a, b, c, a*b*c);

	return 0;
}