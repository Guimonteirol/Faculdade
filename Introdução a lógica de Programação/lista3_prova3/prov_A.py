N = int(input())
maior = -999

for i in range(N):
  P = int(input())
  if P > maior:
    maior = P

print(maior)