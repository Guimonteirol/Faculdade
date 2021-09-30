N1,N2,N3,N4,N5,N6 = input().split()
N1 = int(N1)
N2 = int(N2)
N3 = int(N3)
N4 = int(N4)
N5 = int(N5)
N6 = int(N6)

t = N1 + N2 +N3 +N4 +N5+ N6

if t >= 250:
 print("S+")
elif t >= 200:
 print("S")
elif t>= 180:
 print("S-")
elif t>=150:
 print("A+")
elif t>=100:
 print("A")
elif t>= 80:
 print("A-")
elif t>= 60:
 print("B+")
elif t>= 40:
 print("B")
elif t<40:
  print("B-")