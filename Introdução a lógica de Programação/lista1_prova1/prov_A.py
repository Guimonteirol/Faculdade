T,X = input().split()
T = int(T) 
X = int(X)

if T < X:
  tt = X%T
  print(tt)
elif T == X:
  print(0)
else:
  print(X)