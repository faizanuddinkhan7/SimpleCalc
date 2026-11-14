#include <iostream>

void showChoices(int *choice) {
    std::cout << "\n===== Choices =====" << std::endl;
    std::cout << " Addition(Enter 1)" << std::endl;
    std::cout << " Subtraction(Enter 2)" << std::endl;
    std::cout << " Multiplication(Enter 3)" << std::endl;
    std::cout << " Division(Enter 4)" << std::endl;
    std::cout << "===================" << std::endl;
    
    std::cout << "\nEnter choice: " << std::flush;
    std::cin >> *choice;
}

int addition(int *x, int *y) {
    return (*x + *y);
}

int subtraction(int *x, int *y) {
    return(*x - *y);
}

int multiplication(int *x, int *y) {
    return(*x * *y);
}

int division(int *x, int *y) {
    if (*y == 0) {
        std::cerr << "Error : Division by zero!\n";
        return 0;
    } else {
        return (*x / *y);
    }
}

int main() {
    int x;
    int y;
    int choice;

    showChoices(&choice);

    switch(choice) {
        case 1:
            std::cout << "Enter 1st number for addition: " << std::flush;
            std::cin >> x;

            std::cout << "Enter 2nd number for addition: " << std::flush;
            std::cin >> y;

            std::cout << "Result: " << addition(&x, &y);

            break;
        
        case 2:
            std::cout << "Enter 1st number for subtraction: " << std::flush;
            std::cin >> x;

            std::cout << "Enter 2nd number for subtraction: " << std::flush;
            std::cin >> y;

            std::cout << "Result: " << subtraction(&x, &y);

            break;
        
        case 3:
            std::cout << "Enter 1st number for multiplication: " << std::flush;
            std::cin >> x;

            std::cout << "Enter 2nd number for multiplication: " << std::flush;
            std::cin >> y;

            std::cout << "Result: " << multiplication(&x, &y);

            break;

        case 4: 
            std::cout << "Enter 1st number for division: " << std::flush;
            std::cin >> x;

            std::cout << "Enter 2nd number for division: " << std::flush;
            std::cin >> y;

            std::cout << "Result: " << division(&x, &y);

            break;

        default:
            std::cout << "Invalid choice!!" << std::flush;
            break;
    }

    return 0;
}