def maior(num1, num2, num3):
    if num1 >= num2 and num1 >= num3:
        return num1
    elif num2 >= num1 and num2 >= num3:
        return num2
    else:
        return num3

def menor(num1, num2, num3):
    if num1 <= num2 and num1 <= num3:
        return num1
    elif num2 <= num1 and num2 <= num3:
        return num2
    else:
        return num3

def main():
    num1, num2, num3 = map(float, input("Digite 3 números separados por espaço: ").split())

    maior_numero = maior(num1, num2, num3)
    menor_numero = menor(num1, num2, num3)

    print(f"O maior número é: {maior_numero:.2f}. O menor número é: {menor_numero:.2f}.")

if __name__ == "__main__":
    main()
