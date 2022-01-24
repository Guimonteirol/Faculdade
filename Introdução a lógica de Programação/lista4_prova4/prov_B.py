N = int(input())

M = int(input())

A = [int(e) for e in (input().split())]

B = [int(e) for e in (input().split())]

C = 0
soma = 0

for i in range(M):
  C = A[i] * B[i]
  soma = soma + C


if soma >= N:
  print("Upou de Nivel!")
else:
  print("Nao foi dessa vez!")