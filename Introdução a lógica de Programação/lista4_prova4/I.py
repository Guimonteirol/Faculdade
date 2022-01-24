X = str(input().upper())
X = X.replace(" ","")
aux = X[::-1]
if X == aux:
    print("Palindromo")
else:
    print("!Palindromo")