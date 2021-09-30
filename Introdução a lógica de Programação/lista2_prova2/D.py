z, g = input().split()
d, c = input().split()
'''z = int(z) # zageuri p bloquear atc
g = int(g) # goleiro p bloquar atc
d = int(d) # direção que o atacante irá tentar driblar o zagueiro
c = int(c) # se passar pelo zagueiro, a direção que o atacante irá chutar para o gol'''

if z != d:
  print("Bloqueado")
if z == d:
  print("Driblado")
  if g == c:
    print("Gol")
  elif g != c:
    print("...e o goleiro pega")