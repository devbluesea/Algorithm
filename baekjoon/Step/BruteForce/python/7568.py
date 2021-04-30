num = int(input())
val = []
for i in range(num):
	val.append(list(map(int,input().split())))

for i in val:
	rank = 1
	for j in val:
		if i[0] < j[0] and i[1] < j[1]:
			rank += 1
	print(rank, end=' ')
