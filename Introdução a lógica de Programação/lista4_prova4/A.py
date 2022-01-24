N = int(input())

I=input().split()
#lista[n-1]
# for i in range(N):
#   print(I[i])

n = int(N/2)

for i in range (n):
  aux = I[i]
  I[i] = I[(N-1) - i] 
  I[(N-1) - i] = aux

for i in range(N):
  print(I[i],end=' ')