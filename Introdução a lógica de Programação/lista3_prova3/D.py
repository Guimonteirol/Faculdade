T = int(input()) #limite
P = int(input())
resp = False
while P != 0:
  P = int(input())
  if P > T:
    resp = True

if resp == True:
  print("ALARME")
else:
  print("O Havai pode dormir tranquilo")
