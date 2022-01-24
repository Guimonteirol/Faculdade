A, B = input().split()
A = int(A); B = int(B); cam = [0] * B

for pulo in range(A):
	C = int(input())
	for j in range(0, B, C):
		if cam[j] == 0:
			cam[j] = 1
for sai in cam:
	print(sai, end = " ")