S = str(input())
Q, P = input().split() 
Q = int(Q);P = str(P); aux = int(0) 
S = S.replace(" ", "")
if Q == S.count(P):
    print(S.count(P))
    print("SIM!")
else:
    print(S.count(P))
    print("NAO!")