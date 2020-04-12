#include <iostream>

int main()
{
    int a, b;
    char op;

    while(std::cin >> a >> op >> b) {
        switch (op) {
            case '+': std::cout << a + b << '\n'; break;
            case '-': std::cout << a - b << '\n'; break;
            case '*': std::cout << a * b << '\n'; break;
            case '/': std::cout << a / b << '\n'; break;
        }
    }
}
