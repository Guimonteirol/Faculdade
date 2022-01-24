N = int(input())
vet = [int(N) for N in input().split()]
s = int(sum(vet) / 2); resposta = int(0); aux = int(0)
for i in range(len(vet) -1):
    aux = int(vet[i] + aux)
    if aux == s:
     resposta = i+1
print(resposta)