P = int(input())
A = B = int(10); mark = int(0)
m = []
for i in range(A):
   l = [int(x) for x in input().split()]
   m.append(l)
for x in range(A):
    for y in range(B):
        if m[x][y] == P:
            mark+=1
if mark >= 1:
    print("sim")
else:
    print("nao")