def main():
    salario = float(input("Qual o valor do salário? "))

    if salario > 1250:
        aumento = salario + salario / 10
    else:
        aumento = salario + salario * 0.15

    print(f"{aumento:.2f}")

if __name__ == "__main__":
    main()
