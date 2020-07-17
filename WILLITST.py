# Problem Link : https://www.spoj.com/problems/WILLITST/

n = int(input())
while n>1:
	if n%3==0:  # any multiple of 3 goes forever
		break
	if n%2==0:
		n=n//2
	else:
		n = 3*n + 3
if n<=1:
	print("TAK")
else:
	print("NIE")
