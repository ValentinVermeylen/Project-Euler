# We have to make 20 moves down and 20 moves right. This is a combination of repeated elements.
# 
import math

a = math.factorial(40)
a /= math.factorial(20)
a /= math.factorial(20)
print(a)


print(math.factorial(40))