Q = int(input())
U = str()
for autor in range(Q):
  N = [str(x) for x in input().split(" ")]
  S = []
  for i in range(len(N)):
    S.append(N[i][0]+". ")
    S = [valor.upper() for valor in S]
    if i == len(N) - 1:
      S.pop(-1)
      S.append(N[i][0:1].upper())
      U = (N[i][1:].lower())
print(''.join(S), U, sep='')