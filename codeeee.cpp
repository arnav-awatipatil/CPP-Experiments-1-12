#include <iostream>
int main() 
{
    float a, b;
    char ope;
    std::cout <<"+ - * /: ";
    std::cin >>ope;
    std::cout <<"Enter two numbers: ";
    std::cin >>a>>b;
    switch(ope) 
    {
        case '+':std::cout <<"Sum is "<<a + b; 
        break;
        case '-':std::cout <<"Subtraction is "<<a - b; 
        break;
        case '*':std::cout <<"Multiplication is "<<a * b; 
        break;
        case '/':if(b!=0) 
            std::cout <<"Divison is "<<a/b;
            else 
            std::cout << "Can't divide by zero";
            break;
    }
    return 0;
}


