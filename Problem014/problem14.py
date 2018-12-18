

def next(n, terms):
	terms += 1
	if(n == 1):
		return terms,n
	if(n%2 == 0):
		terms,a = next(n/2, terms)
	else:
		terms,a = next(3*n+1, terms)
	return terms,n


def findSequence():
	max = 0
	n = 0
	for i in range(1, 1000001):
		a,b = next(i,0)
		if (a > max):
			n = b
			max = a
	print(n,max)

if __name__ == "__main__":
	findSequence();