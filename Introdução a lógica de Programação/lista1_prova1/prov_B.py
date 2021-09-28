X, Y, Z = input().split()
X = int(X)
Y = int(Y)
Z = int(Z)
A, B, C = input().split()
A = int(A)
B = int(B)
C = int(C)

xyz_mult = X*Y*Z
abc_mult = A*B*C
div = xyz_mult/abc_mult
z = div*Z
c = div*Z

if(X < A):
  print(0)
elif(Y < B ):
  print(0)
elif(Z < C):
  print(0)
elif(z<c):
  print(0)

elif(X-A==1):
  print(1)
elif(Y-B==1):
  print(1)
elif(Z-C==1):
  print(1)

else:
  print(div)