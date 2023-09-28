def calcula(operador):
    for contador in range(1, 11):
        print(f"\nTabuada do {contador}:")

        for i in range(1, 11):
            if operador == 1:
                print(f"{contador} + {i} = {contador + i}")  # SOMA
            elif operador == 2:
                print(f"{contador} - {i} = {contador - i}")  # SUBTRAÇÃO
            elif operador == 3:
                print(f"{contador} X {i} = {contador * i}")  # MULTIPLICAÇÃO
            elif operador == 4:
                if i != 0:
                    print(f"{contador} / {i} = {contador / i}")  # DIVISÃO
                else:
                    print(f"Divisão por zero não é permitida para {contador} / {i}")
            else:
                print("Opção inválida, tente novamente!")

    return 0

def main():
    opcao = 1

    while opcao != 5:
        print("Digite 1 para adição.")
        print("Digite 2 para subtração.")
        print("Digite 3 para multiplicação.")
        print("Digite 4 para divisão.")
        print("Digite 5 para sair.")

        opcao = int(input())
        if opcao == 5:
            print("Obrigado, até a próxima!")
        else:
            calcula(opcao)

if __name__ == "__main__":
    main()
