N = int(input())

if N %3 == 0:
  n =int(N/3)

  print("Daenerys", n)
  print("Jhon Snow", n)
  print("Arya", n)

else:
  n = N//3
  d = n
  j = n
  a = n
  if d+j+a != N:
    d = 1 + d

  if d+j+a != N:
    j = 1 + j

  if d+j+a != N:
    a = a + 1
  else:
     print("Daenerys", d)
     print("Jhon Snow", j)
     print("Arya", a)