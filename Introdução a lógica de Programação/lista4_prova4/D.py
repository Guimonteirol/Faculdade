N = int(input())
X = [int(e) for e in (input().split())]
#X = map(int, input().split())
soma = 0
valida = False
i = 0
M = int(input())
vida_restante = M

for i in range(N):
  if (X[i] != 0 and X[i] != 1):
    vida_restante = vida_restante - X[i]
    if vida_restante <= 0:
      valida = True
      break
  else:
      if(X[i] == 1):
        vida_restante = M

if(valida == True):
    print("You Died")
else:
  print("Yes, you can")