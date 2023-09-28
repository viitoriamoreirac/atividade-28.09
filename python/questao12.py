def primo(number):
    if number < 2:
        return False

    for i in range(2, int(number / 2) + 1):
        if number % i == 0:
            return False

    return True

def main():
    number = int(input("Digite o número que deseja testar: "))

    if primo(number):
        print("É PRIMO!")
    else:
        print("NÃO É PRIMO!")

if __name__ == "__main__":
    main()
