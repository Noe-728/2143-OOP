#include <fstream>
#include <sstream>
#include "Fraction.h"

int main() {
    std::ifstream input("input.txt");
    if (!input.is_open()) {
        std::cerr << "Error opening input file!" << std::endl;
        return 1;
    }

    while (!input.eof()) {
        std::string line;
        std::getline(input, line);

        std::stringstream ss(line);
        int num1, den1, num2, den2;
        char op;

        // Extract numerator, denominator, and operator
        if (!(ss >> num1 >> std::ws >> '/' >> den1 >> std::ws >> op >> std::ws >> num2 >> std::ws >> '/' >> den2)) {
            std::cerr << "Invalid input format!" << std::endl;
            continue;
        }

        // Create Fraction objects
        Fraction frac1(num1, den1);
        Fraction frac2(num2, den2);

        Fraction result;
        switch (op) {
            case '+':
                result = frac1 + frac2;
                break;
            case '-':
                result = frac1 - frac2;
                break;
            case '*':
                result = frac1 * frac2;
                break;
            case '/':
                if (den2 == 0) {
                    std::cerr << "Error: Division by zero!" << std::endl;
                    continue;
                }
                result = frac1 / frac2;
                break;
            default:
                std::cerr << "Unsupported operator: " << op << std::endl;
                continue;
        }

        std::cout << result << std::endl;
    }

    input.close();
    return 0;
}
