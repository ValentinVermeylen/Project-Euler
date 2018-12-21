from num2words import num2words as nw


def clean(string):
	s = ""
	for car in string:
		if car not in (' ', '-'):
			s += car

	return s


if __name__ == "__main__":
	s = 0
	for i in range(1, 1001):
		s += len(clean(nw(i)))
	print(s)
