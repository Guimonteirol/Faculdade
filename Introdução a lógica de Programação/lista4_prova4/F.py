N = int( input() )
X = input().split()
vet = []

for i in range(N):
    vet.append(X[i])
vet.sort(key = int)
print(*vet)
