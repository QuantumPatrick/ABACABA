#include <iostream>
#include <string>

int main(void) {
    std::string abacaba = "a";
    std::string initial;
    std::cout << abacaba << std::endl;
    int num_iterations = 26;
    char new_char;
    for (int i = 1; i < num_iterations; i++) {
        new_char = 97 + i;
        initial = abacaba;
        abacaba += new_char;
        abacaba += initial;
        //std::cout << abacaba << std::endl;
    }
    std::cout << abacaba << std::endl;
}
