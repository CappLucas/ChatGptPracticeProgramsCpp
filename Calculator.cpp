/*


*/
#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::cout << "enter an expression. for example: 1 + 4. ";

    std::string input = "";

    std::getline(std::cin, input);

    std::istringstream stringStream(input);

    double numb1, numb2;

    char op;

    stringStream >> numb1 >> op >> numb2;

    

    switch(op){
        case '+':
            std::cout << numb1 + numb2;
        break;
        case '-':
            std::cout << numb1 - numb2;
        break;
        case '*':
            std::cout << numb1*numb2;
        break;
        case '/':
            if(numb2 == 0){
                std::cout << "Can't devide by zero!";
            }
            else{
                std::cout << numb1/numb2;
            }
        break;
        default:
            std::cout << "Unknown operator.";
    }
    return 0;
}
