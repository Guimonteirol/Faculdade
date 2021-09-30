a, b, c = input().split()
a = int(a) #pistas
b = int(b) #alunos por pistas
c = int(c) #alunos

c = c + 1
d = a * b
if d >= c:
  print("S")
elif d < c:
  print("N")