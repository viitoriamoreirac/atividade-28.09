def calcular_raiz_quadrada(n, precisao=0.0001):
    b = 2.0

    while True:
        p = (b + n / b) / 2.0
        if abs(p * p - n) < precisao:
            return p
        b = p

def main():
    numero = float(input("Digite um número para calcular a raiz quadrada: "))
    precisao = 0.0001

    if numero < 0:
        print("O número deve ser não-negativo.")
        return 1

    raiz_aproximada = calcular_raiz_quadrada(numero, precisao)

    print(f"A raiz quadrada aproximada de {numero:.2f} é: {raiz_aproximada:.2f}")

if __name__ == "__main__":
    main()
