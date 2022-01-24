Z = int(input())
l = []; res = []
for i in range(Z):
    i, r = input().split()
    i = int(i); r = int(r)
    l.append(r)
    res.append(i)
for  i in range(len(l)):
    for j in range(len(l) -1):
        if l[j+1]>l[j]:
            l[j+1], l[j] = l[j], l[j+1]
            res[j+1], res[j] = res[j], res[j+1]
for j in range (Z):
    print(res[j], l[j])