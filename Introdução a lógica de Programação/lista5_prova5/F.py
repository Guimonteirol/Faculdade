ma=[]
for i in range (10):
  M= input().split()
  ma.append(M)
for s in range (10):
  for y in range(10):
    if s < 9:
      if ma[s][y] == 't':
        if ma[s+1][y] == '*':
           ma[s][y] = 'p'
    if y < 9:
      if ma[s][y] == 't':
        if ma[s][y+1] == '*':
           ma[s][y] = 'p'
    if s > 0:
      if ma[s][y] == 't':
        if ma[s-1][y] == '*':
           ma[s][y] = 'p'
    if y>0:
      if ma[s][y] == 't':
        if ma[s][y-1] == '*':
           ma[s][y] = 'p'
for s in range (10):
  for y in range(10):
    print(ma[s][y], end = " ")
  print()