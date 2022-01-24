A = int(input())
B = []
C = []
B = input().split()
C = input().split()
aux = []
B.sort(key=int, reverse=True)
C.sort(key=int)
for i in range(A):
    print(B[i], C[i])