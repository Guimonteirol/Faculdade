L, C = [int (i) for i in input().split()]
X = [];  Y = []; Z = []
for l in range (L):
    l1 = [int (j) for j in input().split()]
    X.append (l1)
for l in range (L):
    l2 = [int (k) for k in input().split()]
    Y.append (l2)
for l in range (L):
    l3 = [0] * C
    Z.append (l3)
    for co in range (C):
        Z [l] [co] = X [l] [co] - Y [l] [co]
        print( Z [l] [co], end=" ")
    print()
