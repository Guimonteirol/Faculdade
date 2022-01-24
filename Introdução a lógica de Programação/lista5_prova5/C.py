N = int(input())
mt = []
somh = int(0); somr = int(0)
for cont in range (N):
    l = [int(i) for i in input().split()]
    mt.append(l)
l, c = input().split()
l = int(l); c = int(c)
if l > c:
    for j in range (N):
        somh = somh + mt [l] [j]
        mt [l] [j] = 0
        somr = somr + mt [j] [c]
else:
    for k in range (N):
        somr = somr + mt [k] [c]
        mt [k] [c] = 0
        somh = somh + mt [l] [k]
print("Harry",somh)
print("Ron", somr)