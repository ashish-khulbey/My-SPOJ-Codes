# Problem Link : https://www.spoj.com/problems/FASHION/

t = int(input())
while t>0:
	n = int(input())
	m = list(map(int, input().split()))
	w = list(map(int, input().split()))
	m.sort()  # to maximize the sum of products
	w.sort()  # to maximize the sum of products
	ans = 0
	for i in range(n):
		ans+=(m[i]*w[i])
	print(ans)
	t=t-1
