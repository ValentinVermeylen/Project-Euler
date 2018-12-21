
def factorial(n):
	if(n == 1):
		return 1
	return n * factorial(n-1)


if __name__ == "__main__":
	a = factorial(100)
	s = 0
	for el in str(a):
		s += int(el)
	print(s)