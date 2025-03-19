# IAE (Iterative Arithmetic Engine)

This is a simple command-line calculator written in C++. It performs addition, subtraction, multiplication, and division based on user input.

## How to Use

1.  **Clone the repository:**

    ```bash
    git clone https://github.com/rakshitwalde/iae
    ```

2.  **Make binary file directory:**
3.  ```bash
    mkdir /bin
    ```

4.  **Compile the program:**

    ```bash
    clang++ src/main.cpp -o bin/iae
    ```

5.  **Run the calculator:**

    ```bash
    bin/iae
    ```

6.  **Input:**
    * Enter a number followed by an operator (+, -, \*, /).
    * Repeat until you enter the '=' sign.
    * The calculator will then display the result.
    * You will be asked if you want to perform another calculation.

## Features

* Performs basic arithmetic operations (+, -, \*, /).
* Calculates results based on a sequence of user inputs.
* Continues calculations until the user enters '='.
* Asks the user if they want to perform another calculation.

## Contributing

Feel free to contribute to this project by submitting pull requests or opening issues.

## License

This project is licensed under the MIT License. See the `LICENSE` file for details.
