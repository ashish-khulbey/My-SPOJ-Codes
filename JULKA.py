# https://www.spoj.com/problems/JULKA/

t = 10  # total test cases fixed at 10
while t>0:
	m = int(input())
	n = int(input())
	a = (m+n)//2  # larger apples
	b = m - a # lesser apples
	print(a)
	print(b)
	t=t-1
