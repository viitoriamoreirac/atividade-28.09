def main():
    casa = float(input("Qual o valor da casa? "))
    salario = float(input("Qual o valor do salário? "))
    anos = float(input("Em quantos anos deseja pagar? "))

    prestacao = casa / (anos * 12)

    prestacao_maxima = salario * 0.3
    if prestacao > prestacao_maxima:
        print("O empréstimo não foi aprovado.")
    else:
        print("Aprovado!")

if __name__ == "__main__":
    main()
