n = int(input())
matriz = []
for i in range(n):
    linha = list(map(int, input().split()))
    matriz.append(linha)

somaD1 = 0
somaD2 = 0
somaT = 0
for i in range(n):
    for j in range(n):
        if i == j:
            somaD1 += matriz[i][j]
        if (i + j + 1) == n:
            somaD2 += matriz[i][j]

somaT = somaD2 - somaD1
if somaT < 0:
    somaT *= -1

print(somaT)