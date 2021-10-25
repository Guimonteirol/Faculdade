N, X , XPmin = input().split()
N = int(N)
X = int(X) #ganham
XPmin = int(XPmin) #mnimo

for i in range(N):
  XP, Q = input().split()
  XP = int(XP)
  Q = int(Q)

  if XP >= XPmin:
    XPT = XP + X
    QT = Q + 1
    print(XPT, QT)
  else:
    print(XP, Q)