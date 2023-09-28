def main():
    opcao = input("Digite a operação desejada (+, -, *, /): ")
    num1, num2 = map(float, input("Digite os dois números separados por espaço: ").split())

    if opcao == '+':
        resultado = num1 + num2
        print(f"O resultado é: {resultado:.1f}")
    elif opcao == '-':
        resultado = num1 - num2
        print(f"O resultado é: {resultado:.1f}")
    elif opcao == '*':
        resultado = num1 * num2
        print(f"O resultado é: {resultado:.1f}")
    elif opcao == '/':
        if num2 != 0:
            resultado = num1 / num2
            print(f"O resultado é: {resultado:.1f}")
        else:
            print("Não é possível dividir por zero.")
    else:
        print("Opção inválida!")

if __name__ == "__main__":
    main()
