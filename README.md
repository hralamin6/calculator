# Documentation for the Scientific Calculator Program in C

This program is a simple scientific calculator that allows users to perform various operations such as matrix operations, solving non-linear equations, trigonometric calculations, solving simultaneous equations, and working with complex numbers. It also includes a basic arithmetic calculator for general calculations.

## Features:

1. **General Calculation**: Perform basic arithmetic operations (addition, subtraction, multiplication, and division).
2. **Matrix Operations**: Perform operations on matrices like addition, subtraction, multiplication, and transpose.
3. **Polynomial Solver**: Solve quadratic equations of the form $ax^2 + bx + c = 0$.
4. **Trigonometric Calculations**: Calculate the sine, cosine, and tangent of angles (in degrees).
5. **Simultaneous Equations**: Solve a system of two linear equations with two variables.
6. **Complex Number Operations**: Add, subtract, multiply complex numbers and calculate their magnitudes.

---

## How to Use the Program

### Step 1: Start the Program

* Compile the program using a C compiler (e.g., GCC).

  ```bash
  gcc -o calculator calculator.c -lm
  ```

  **Note**: The `-lm` flag is used to link the math library required for mathematical operations.

* Run the program.

  ```bash
  ./calculator
  ```

### Step 2: Menu Selection

When the program starts, you will be presented with the following menu:

```
Choose the operations

0. Exit
1. Matrix Operation
2. Solution of non-linear poly equation
3. Trigonometric calculation
4. Solution of simultaneous equations
5. Complex number operations
6. General Calculation
```

### Step 3: Operations Explained

#### 1. **General Calculation**

* Choose option `6` to perform basic arithmetic operations such as addition, subtraction, multiplication, and division.
* Input two numbers and the operator (either `+`, `-`, `*`, `/`).
* Example input:

  ```
  Enter first number: 10
  Enter an operator (+, -, *, /): +
  Enter second number: 5
  ```
* Output:

  ```
  Result: 15.00
  ```

#### 2. **Matrix Operations**

* Choose option `1` to perform matrix operations (addition, subtraction, multiplication, or transpose).
* You will be prompted to input the number of rows and columns for the matrix.
* Then, you will choose the operation:

  1. **Matrix Addition**: Adds two matrices of the same dimensions.
  2. **Matrix Subtraction**: Subtracts one matrix from another of the same dimensions.
  3. **Matrix Multiplication**: Multiplies two matrices. The number of columns of the first matrix must be equal to the number of rows of the second matrix.
  4. **Matrix Transpose**: Transposes the matrix by swapping its rows and columns.
* Example input for matrix addition:

  ```
  Enter the number of rows and columns for the matrix: 2 2
  Choose Matrix Operation:
  1. Matrix Addition
  Enter elements of the first matrix:
  1 2
  3 4
  Enter elements of the second matrix:
  5 6
  7 8
  ```
* Output:

  ```
  The result of matrix addition is:
  6 8
  10 12
  ```

#### 3. **Solution of Non-Linear Polynomial Equation**

* Choose option `2` to solve a quadratic equation of the form $ax^2 + bx + c = 0$.
* You will be asked to input the coefficients `a`, `b`, and `c`.
* The program will calculate the discriminant and return the real or complex roots.
* Example input:

  ```
  Enter the coefficients a, b, c for the quadratic equation (ax^2 + bx + c = 0): 1 2 3
  ```
* Output:

  ```
  Complex roots
  Root 1: -1.00 + 1.41i
  Root 2: -1.00 - 1.41i
  ```

#### 4. **Trigonometric Calculations**

* Choose option `3` to calculate trigonometric functions like sine, cosine, or tangent.
* You will be prompted to select the trigonometric function and enter an angle in degrees.
* Example input:

  ```
  Select the trigonometric function:
  1. Sine
  2. Cosine
  3. Tangent
  Enter the angle in degrees: 45
  ```
* Output:

  ```
  Result: 0.71
  ```

#### 5. **Solution of Simultaneous Equations**

* Choose option `4` to solve a system of two linear equations in two variables.
* The program will ask for the coefficients of two equations of the form:

  ```
  a1 * x + b1 * y = c1
  a2 * x + b2 * y = c2
  ```
* The program will calculate and display the values of `x` and `y`.
* Example input:

  ```
  Enter coefficients for first equation (a1, b1, c1): 1 2 5
  Enter coefficients for second equation (a2, b2, c2): 3 4 6
  ```
* Output:

  ```
  Solution: x = -4.00, y = 6.00
  ```

#### 6. **Complex Number Operations**

* Choose option `5` to perform operations on complex numbers (addition, subtraction, multiplication, and magnitude).
* You will be prompted to enter the real and imaginary parts of two complex numbers.
* Example input:

  ```
  Enter real and imaginary parts of first complex number: 2 3
  Enter real and imaginary parts of second complex number: 1 4
  ```
* Output:

  ```
  Sum: 3.00 + 7.00i
  Difference: 1.00 - 1.00i
  Product: -10.00 + 11.00i
  Magnitude of first complex number: 3.61
  ```

---

## Example of Use Case

Here’s a typical session where the user solves a quadratic equation, does a trigonometric calculation, and performs a complex number operation:

```
Choose the operations

0. Exit
1. Matrix Operation
2. Solution of non-linear poly equation
3. Trigonometric calculation
4. Solution of simultaneous equations
5. Complex number operations
6. General Calculation

Enter your choice: 2
Enter the coefficients a, b, c for the quadratic equation (ax^2 + bx + c = 0): 1 2 3
Complex roots
Root 1: -1.00 + 1.41i
Root 2: -1.00 - 1.41i

Choose the operations

0. Exit
1. Matrix Operation
2. Solution of non-linear poly equation
3. Trigonometric calculation
4. Solution of simultaneous equations
5. Complex number operations
6. General Calculation

Enter your choice: 3
Select the trigonometric function:
1. Sine
2. Cosine
3. Tangent
Enter the angle in degrees: 45
Result: 0.71

Choose the operations

0. Exit
1. Matrix Operation
2. Solution of non-linear poly equation
3. Trigonometric calculation
4. Solution of simultaneous equations
5. Complex number operations
6. General Calculation

Enter your choice: 5
Enter real and imaginary parts of first complex number: 2 3
Enter real and imaginary parts of second complex number: 1 4
Sum: 3.00 + 7.00i
Difference: 1.00 - 1.00i
Product: -10.00 + 11.00i
Magnitude of first complex number: 3.61
```

---

## Notes

* Ensure to input valid numbers for the calculations (e.g., real and imaginary parts as floating-point numbers).
* For matrix operations, make sure the matrices are compatible with the chosen operation (e.g., matrix multiplication requires the number of columns in the first matrix to match the number of rows in the second matrix).
