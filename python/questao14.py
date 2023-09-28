def calcular_resto_divisao(dividendo, divisor):
    while dividendo >= divisor:
        dividendo -= divisor
    return dividendo

def main():
    dividendo = int(input("Digite o dividendo: "))
    divisor = int(input("Digite o divisor: "))

    if divisor == 0:
        print("Divisão por zero!")
        return 1

    resto = calcular_resto_divisao(dividendo, divisor)
    print(f"O resto da divisão de {dividendo} por {divisor} é: {resto}")

if __name__ == "__main__":
    main()
