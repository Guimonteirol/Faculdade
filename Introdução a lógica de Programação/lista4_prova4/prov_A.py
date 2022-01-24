N = int(input())

A = [int(e) for e in (input().split())]

B = [int(e) for e in (input().split())]

M = len(B)

cont = 0

for j in range(M):
  for i in range(N):
    if A[i] == B[j]:
      cont = cont + 1

if cont == M:
  print("Exodia Obliterar")
else:
  print("Voce perdeu Yugi")