//kamal tripathi
//23 May 2022
//calculator to perform basic operations of + - * / between two numbers



#include <iostream>

double num1, num2;
char op;

int main() {
    std::cout << "Enter First number " << std::endl;
    std::cin >> num1;
    
    std::cout << "Enter the operator: options are +, -, *, /" << std::endl;
    std::cin >> op;
        
    std::cout << "The Entered numbers are " << num1 <<" and " << num2 << std::endl;
    std::cin >> num2;

    if (op == '+') {
        std::cout << "The sum is "<< num1 + num2 << std::endl;
    }
    else if (op == '-') {
        std::cout << "The result is "<< num1 - num2 << std::endl;
    }
    else if (op == '*') {
        std::cout << "The result is "<< num1 * num2 << std::endl;
    }
    else if (op == '/') {
        std::cout << "The result is "<< num1 / num2 << std::endl;
    }
    else
        std::cout << "Invalid expression" << std::endl;
    
    
    

}
