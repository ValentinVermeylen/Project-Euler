import math
#Finding the first triangle number that has over 500 divisors.


def main():
	n = 1
	iter = 1
	while(nbOfDivisors(n) < 500):
		iter += 1
		n += iter
	print(n)



def nbOfDivisors(number):
	nb = 1 #(itself)
	if(number % 2 != 0): #Logically, an even number must be the right one
		return 0
	for i in range(1,math.floor(math.sqrt(number)) + 1):
		if((number%i) == 0):
			nb += 2
	if(math.floor(math.sqrt(number))*math.floor(math.sqrt(number)) == number):
		nb -= 1
	return nb

if __name__ == '__main__':
	main()
