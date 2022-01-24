n = int(input())
l = [int (i) for i in input().split()]
A = []; total = int(8)
for i in range(len(l)-1, 0, -1):
  m = 0
  for j in range(1, i+1):
      if l[j] > l[m]:
           m = j
      l[m], l[i] = l[i], l[m]
for ind in range(total):
    A.append(l[ind])
print(*(A))