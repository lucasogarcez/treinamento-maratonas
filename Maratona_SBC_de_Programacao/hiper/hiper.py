# Importing the required library
import sys

def main():
    # Reading the number of elements
    n = int(input())
    vet = []
    
    # Reading the elements into the list
    for i in range(n):
        vet.append(int(input()))
    
    # Checking for the condition and printing the result
    for i in range(n):
        cont = 0
        for k in range(2, 11):
            if vet[i] % k == 0 and k != vet[i]:
                print("0")
                cont += 1
                break
        if cont == 0:
            print("1")

if __name__ == "__main__":
    main()

