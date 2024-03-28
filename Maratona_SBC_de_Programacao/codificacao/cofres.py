# Python code translated from the given C code

# Importing the required library
import math

def main():
    n = int(input())
    aux2 = 0
    for cont in range(1, n+1):
        aux = 0
        for cont1 in range(1, n+1):
            if cont % cont1 == 0:
                aux += 1
        if aux == 2:
            aux2 += 1
    print(aux2)

if __name__ == "__main__":
    main()

