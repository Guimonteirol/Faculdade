E, P = input().split()
E = int(E)
P = int(P)
i = 0
while E > 0 and P > 0  :
  E = E - P
  i = i + 1
  P = P - 1
if E>0:
  print("F")
else:
 print(i)
