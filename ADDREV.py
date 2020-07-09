# Problem Link : https://www.spoj.com/problems/ADDREV/

t = int(input())
while t>0:
	a,b = input().split()
	a = int(a[::-1])  # Reverse first number
	b = int(b[::-1])  # Reverse second number
	print(int(str((a+b))[::-1]))  # Add and print reversed ans
	t=t-1
