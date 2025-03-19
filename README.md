# Command-Line Calculator

This is a simple command-line calculator written in C++. It performs addition, subtraction, multiplication, and division based on user input.

## How to Use

1.  **Clone the repository:**

    ```bash
    git clone <repository_url>
    ```

2.  **Compile the program:**

    ```bash
    g++ src/main.cpp -o bin/calculator
    ```

3.  **Run the calculator:**

    ```bash
    bin/calculator
    ```

4.  **Input:**
    * Enter a number followed by an operator (+, -, \*, /).
    * Repeat until you enter the '=' sign.
    * The calculator will then display the result.
    * You will be asked if you want to perform another calculation.

## Example
Enter a number: 10
>Enter the operation (+, -, *, /, =): +
Enter a number: 5
Enter the operation (+, -, *, /, =): *
Enter a number: 2
Enter the operation (+, -, *, /, =): =
Result: 30
Do you want to continue? (y/n): y
Enter a number: 20
Enter the operation (+, -, *, /, =): /
Enter a number: 4
Enter the operation (+, -, *, /, =): =
Result: 5
Do you want to continue? (y/n): n

## Features

* Performs basic arithmetic operations (+, -, \*, /).
* Calculates results based on a sequence of user inputs.
* Continues calculations until the user enters '='.
* Asks the user if they want to perform another calculation.

## Contributing

Feel free to contribute to this project by submitting pull requests or opening issues.

## License

This project is licensed under the MIT License. See the `LICENSE` file for details.
