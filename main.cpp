#include <iostream>
#include <limits>

void showChoices(int &choice) {
    std::cout << "\n===== Choices =====" << std::endl;
    std::cout << " Addition(Enter 1)" << std::endl;
    std::cout << " Subtraction(Enter 2)" << std::endl;
    std::cout << " Multiplication(Enter 3)" << std::endl;
    std::cout << " Division(Enter 4)" << std::endl;
    std::cout << "===================" << std::endl;
    std::cout << "\nEnter choice: " << std::flush;

    if (!(std::cin >> choice)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        choice = 0;
    }
}

int addition(const int &x, const int &y) {return (x + y);}
int subtraction(const int &x, const int &y) {return(x - y);}
int multiplication(const int &x, const int &y) {return(x * y);}

int division(const int &x, const int &y) {
    if (y == 0) {
        std::cerr << "Error : Division by zero!\n";
        return 0;
    } else {
        return (x / y);
    }
}

int main() {
    int x = 0;
    int y = 0;
    int choice = 0;

    showChoices(choice);

    if(choice < 1 || choice > 4){
        std::cerr << "Invalid choice" << std::flush;
        return 1;
    }

    std::cout << "Enter 1st number: " << std::flush;
    if(!(std::cin >> x)) return 1;

    std::cout << "Enter 2nd number: " << std::flush;
    if (!(std::cin >> y)) return 1;

    switch(choice) {
        case 1: std::cout << "Result: " << addition(x, y) << std::endl; break;
        case 2: std::cout << "Result: " << subtraction(x, y) << std::endl; break;
        case 3: std::cout << "Result: " << multiplication(x, y) << std::endl; break;
        case 4: std::cout << "Result: " << division(x, y) << std::endl; break;
    }
    
    return 0;
}