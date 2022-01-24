N,M = [int(x)for x in input().split()]
ma=[]
for k in range (N):
  p=[int(x) for x in input().split()]
  ma.append(p)
t=0
v=1
l=0
for o in range(N):
  for i in range(M):
    C = ma[o][t]
    l+= ma[o][t]
    if l<0:
      l = 0
    else:
      l
    t+=v
  v=-v
  t+=v
print(l)