#include <iostream>
#include <limits>

int main() {
    double result = 0.0;
    char operation;
    double number;
    bool first_number = true;

    do {
        std::cout << "Enter a number: ";
        while (!(std::cin >> number)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter a number: ";
        }

        if (first_number) {
            result = number;
            first_number = false;
        } else {
            switch (operation) {
                case '+':
                    result += number;
                    break;
                case '-':
                    result -= number;
                    break;
                case '*':
                    result *= number;
                    break;
                case '/':
                    if (number != 0) {
                        result /= number;
                    } else {
                        std::cout << "Error: Division by zero!" << std::endl;
                        first_number = true;
                        result = 0.0;
                        // Ask if user wants to continue after division by zero.
                        char continue_choice;
                        std::cout << "Do you want to continue? (y/n): ";
                        std::cin >> continue_choice;
                        if (continue_choice != 'y' && continue_choice != 'Y') {
                            return 0; // Exit the program
                        }
                        else {
                          continue; //Restart the loop
                        }

                    }
                    break;
                default:
                    std::cout << "Invalid operation!" << std::endl;
                    first_number = true;
                    result = 0.0;
                    continue;
            }
        }
        if(!first_number){
          std::cout << "Enter the operation (+, -, *, /, =): ";

          while (!(std::cin >> operation)) {
              std::cin.clear();
              std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
              std::cout << "Invalid input. Please enter a valid operation: ";
          }

          if (operation == '=') {
              std::cout << "Result: " << result << std::endl;
              char continue_choice;
              std::cout << "Do you want to continue? (y/n): ";
              std::cin >> continue_choice;

              if (continue_choice != 'y' && continue_choice != 'Y') {
                  break;
              } else {
                  first_number = true;
                  result = 0.0;
                  continue;
              }

          }
        }

    } while (true);

    return 0;
}
