#include <iostream>
#include <string>

int main(void) {
    std::string abacaba = "a"; // initializes sequence-string as "a"
    std::string initial;
    int num_iterations = 26;
    char new_char;
    for (int i = 1; i < num_iterations; i++) {
        new_char = 97 + i; // uses ASCII values to add subsequent letters
        initial = abacaba; // saves sequence to add after new character
        abacaba += new_char;
        abacaba += initial;
    }
    std::cout << abacaba << std::endl;
}
