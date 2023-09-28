def main():
    consumo = float(input("Qual o consumo? "))
    installation = input("Qual o tipo de residência? (R para residências, I para indústrias e C para comércios) ")

    if installation == 'R':
        price = consumo * 0.4 if consumo <= 500 else consumo * 0.65
    elif installation == 'I':
        price = consumo * 0.55 if consumo <= 1000 else consumo * 0.6
    elif installation == 'C':
        price = consumo * 0.55 if consumo <= 5000 else consumo * 0.6
    else:
        print("Opção de instalação inválida!")
        return

    print(f"O valor a pagar será R$ {price:.2f}")

if __name__ == "__main__":
    main()
