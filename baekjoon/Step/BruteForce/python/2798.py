a, ref = map(int, input().split())
lst = list(map(int, input().split()))
ans = 0

for i in range(a - 2):
	for j in range(i + 1, a - 1):
		for k in range(j + 1, a):
			if (lst[i] + lst[j] + lst[k] <= ref and
			lst[i] + lst[j] + lst[k] > ans):
				ans = lst[i] + lst[j] + lst[k]

print (ans)
