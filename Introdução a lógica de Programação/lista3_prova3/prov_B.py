C = int(input())
V = 0

for i in range(C):
  L, M, T = input().split()
  L = int(L) #o tempo limite em horas da respectiva missão
  M = int(M) #a quantidade de vezes que Subaru morreu tentando concluir aquela missão
  T = int(T) #quantas horas Subaru levou na sua última e bem sucedida tentativa
  if M!= 0:
    tt = L * M
    ttt = tt + T
  V = V + ttt

print(V)