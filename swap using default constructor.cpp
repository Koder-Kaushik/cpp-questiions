#include <iostream>

class SwapNumbers {
private:
    int num1, num2;

public:
    // Default constructor
    SwapNumbers() : num1(0), num2(0) {}

    // Function to swap numbers
    void swap() {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    // Function to set numbers
    void setNumbers(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }

    // Function to display numbers
    void display() {
        std::cout << "Number 1: " << num1 << std::endl;
        std::cout << "Number 2: " << num2 << std::endl;
    }
};

int main() {
    SwapNumbers numbers;
    numbers.setNumbers(10, 20);
    std::cout << "Before swapping:" << std::endl;
    numbers.display();
    numbers.swap();
    std::cout << "After swapping:" << std::endl;
    numbers.display();
    return 0;
}