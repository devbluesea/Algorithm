def makeAnswer(inputNum, origin):
	ans = inputNum
	while inputNum != 0:
		ans = ans + int(inputNum % 10)
		inputNum = int(inputNum / 10)
	if (ans == origin):
		return (1)
	else:
		return (0)

n = int(input())

for i in range (1, n + 1):
	j = makeAnswer(i , n)
	if j == 1:
		print(i)
		exit()

print(0)
exit()
