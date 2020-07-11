# Problem Link : https://www.spoj.com/problems/CANDY/

# your code goes here
n = int(input())
while n!=-1:
	l = []
	avg = 0
	total = 0
	for i in range(n):
		l.append(int(input()))
		avg += l[i]
	avg = avg / n
	if not avg.is_integer():
		print("-1")
	else :
		for i in range(n):
			if avg-l[i]>0:
				total+=avg-l[i]
		print(int(total))
	n = int(input())
