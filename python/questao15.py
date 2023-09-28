def eh_palindromo(numero):
    numero_str = str(numero)
    invertido_str = numero_str[::-1]
    return numero_str == invertido_str

def main():
    numero = int(input("Digite um número: "))
    
    if eh_palindromo(numero):
        print(f"{numero} é um palíndromo.")
    else:
        print(f"{numero} não é um palíndromo.")

if __name__ == "__main__":
    main()
