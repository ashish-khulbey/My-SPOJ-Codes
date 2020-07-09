# Problem Link : https://www.spoj.com/problems/FCTRL2/

t = int(input())
while t>0:
	n = int(input())
	val = 1 # value string variable
	for i in range(1, n+1):
		val *= i
	print(val)
	t=t-1
