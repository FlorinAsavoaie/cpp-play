#include <iostream>

#define VALIDATE_INPUT_INVALID_HEIGHT -1
#define VALIDATE_INPUT_INVALID_WIDTH -1

float area(float width, float height) {
    return height * width;
}

float readWidth() {
    float width;
    std::cout << "Enter the width: ";
    std::cin >> width;
    return width;
}

float readHeight() {
    float height;
    std::cout << "Enter the height: ";
    std::cin >> height;
    return height;
}

void displayOutput(float area) {
    std::cout << "The calculated area is " << area << "." << std::endl;
}

int validateInput(float width, float height) {
    if (height <= 0) {
        std::cout << "Error: the height must be a positive number!" << std::endl << std::endl;
        return VALIDATE_INPUT_INVALID_HEIGHT;
    }
    if (width <= 0) {
        std::cout << "Error: the width must be a positive number!" << std::endl << std::endl;
        return VALIDATE_INPUT_INVALID_WIDTH;
    }
    return 0;
}

void runProgram() {
    float width, height;
    std::cout << "We are reading two numerical (real) values which represent the width and height of the rectangle." << std::endl;
    std::cout << "We need to calculate and display the area of the rectangle." << std::endl << std::endl;

    do {
        width = readWidth();
        height = readHeight();
    } while (validateInput(width, height));

    displayOutput(area(width, height));
}

int main() {
    runProgram();
    return 0;
}
