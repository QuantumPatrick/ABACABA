def main():
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    abacaba = "a"
    for i in range(1, len(alphabet)):
        abacaba += alphabet[i] + abacaba
    print(abacaba)
main()
