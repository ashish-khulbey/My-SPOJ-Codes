# Problem Link : https://www.spoj.com/problems/EIGHTS/

t = int(input())
while t>0:
	n = int(input())
	ans = 192+(n-1)*250  # AP formula
	print(ans)
	t=t-1
