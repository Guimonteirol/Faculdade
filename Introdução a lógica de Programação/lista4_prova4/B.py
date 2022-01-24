N = int(input())
n = input().split()
C = input()
for i in range (N):
  if(n[i] == C):
    valida = True
    break
  else:
    valida = False

if(valida == True):
  print(C)
else:
  print(-1)