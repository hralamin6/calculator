#include <stdio.h>
#include <math.h>

// Define a struct for complex numbers
typedef struct {
    double real;
    double imag;
} Complex;

// Function to add two complex numbers
Complex add_complex(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

// Function to subtract two complex numbers
Complex subtract_complex(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}

// Function to multiply two complex numbers
Complex multiply_complex(Complex c1, Complex c2) {
    Complex result;
    result.real = (c1.real * c2.real) - (c1.imag * c2.imag);
    result.imag = (c1.real * c2.imag) + (c1.imag * c2.real);
    return result;
}

// Function to calculate the magnitude of a complex number
double magnitude_complex(Complex c) {
    return sqrt(c.real * c.real + c.imag * c.imag);
}

void general_calculation();
void matrix_operations();
void solve_polynomial();
void trigonometric_calculations();
void solve_simultaneous_equations();
void complex_operations();

void matrix_addition(int m, int n);
void matrix_subtraction(int m, int n);
void matrix_multiplication(int m1, int n1, int m2, int n2);
void matrix_transpose(int m, int n);

int main() {
    int choice;
    
    do {
        printf("\nChoose the operations\n\n");
        printf("0. Exit\n");
        printf("1. Matrix Operation\n");
        printf("2. Solution of non-linear poly equation\n");
        printf("3. Trigonometric calculation\n");
        printf("4. Solution of simultaneous equations\n");
        printf("5. Complex number operations\n");
        printf("6. General Calculation\n\n");
        
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 0:
                printf("Exiting... Goodbye!\n");
            break;
            case 1:
                matrix_operations();
                break;
            case 2:
                solve_polynomial();
                break;
            case 3:
                trigonometric_calculations();
                break;
            case 4:
                solve_simultaneous_equations();
                break;
            case 5:
                complex_operations();
                break;
            case 6:
                general_calculation();
            break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);
    
    return 0;
}

void general_calculation() {
    double num1, num2, result;
    char operator_name;

    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter an operator_name (+, -, *, /): ");
    scanf(" %c", &operator_name);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch (operator_name) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                printf("Error: Division by zero\n");
                return;
            }
            break;
        default:
            printf("Invalid operator_name\n");
            return;
    }

    printf("Result: %.2lf\n", result);
}

void matrix_operations() {
    int m, n, option;
    printf("Enter the number of rows and columns for the matrix: ");
    scanf("%d %d", &m, &n);
    
    printf("\nChoose Matrix Operation:\n");
    printf("1. Matrix Addition\n");
    printf("2. Matrix Subtraction\n");
    printf("3. Matrix Multiplication\n");
    printf("4. Matrix Transpose\n");
    scanf("%d", &option);

    switch (option) {
        case 1:
            matrix_addition(m, n);
            break;
        case 2:
            matrix_subtraction(m, n);
            break;
        case 3:
            matrix_multiplication(m, n, m, n);
            break;
        case 4:
            matrix_transpose(m, n);
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }
}

void matrix_addition(int m, int n) {
    int i, j;
    int matrix1[m][n], matrix2[m][n], result[m][n];

    printf("Enter the elements of the first matrix:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("The result of matrix addition is:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

void matrix_subtraction(int m, int n) {
    int i, j;
    int matrix1[m][n], matrix2[m][n], result[m][n];

    printf("Enter the elements of the first matrix:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    printf("The result of matrix subtraction is:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

void matrix_multiplication(int m1, int n1, int m2, int n2) {
    int i, j, k;
    int matrix1[m1][n1], matrix2[m2][n2], result[m1][n2];

    if (n1 != m2) {
        printf("Matrix multiplication not possible. Column of A must equal row of B.\n");
        return;
    }

    printf("Enter the elements of the first matrix:\n");
    for(i = 0; i < m1; i++) {
        for(j = 0; j < n1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for(i = 0; i < m2; i++) {
        for(j = 0; j < n2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for(i = 0; i < m1; i++) {
        for(j = 0; j < n2; j++) {
            result[i][j] = 0;
            for(k = 0; k < n1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("The result of matrix multiplication is:\n");
    for(i = 0; i < m1; i++) {
        for(j = 0; j < n2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

void matrix_transpose(int m, int n) {
    int i, j;
    int matrix[m][n];

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The transpose of the matrix is:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }
}

void solve_polynomial() {
    // Solving quadratic equations (ax^2 + bx + c = 0)
    double a, b, c, discriminant, root1, root2;

    printf("Enter the coefficients a, b, c for the quadratic equation (ax^2 + bx + c = 0): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The roots are real and distinct: %.2lf, %.2lf\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("The roots are real and equal: %.2lf\n", root1);
    } else {
        printf("Complex roots\n");
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-discriminant) / (2 * a);
        printf("Root 1: %.2lf + %.2lfi\n", realPart, imagPart);
        printf("Root 2: %.2lf - %.2lfi\n", realPart, imagPart);    }
}

void trigonometric_calculations() {
    double angle, result;
    int choice;

    printf("Select the trigonometric function:\n");
    printf("1. Sine\n2. Cosine\n3. Tangent\n");
    scanf("%d", &choice);

    printf("Enter the angle in degrees: ");
    scanf("%lf", &angle);
    angle = angle * M_PI / 180; // Convert to radians

    switch (choice) {
        case 1:
            result = sin(angle);
            break;
        case 2:
            result = cos(angle);
            break;
        case 3:
            result = tan(angle);
            break;
        default:
            printf("Invalid choice\n");
            return;
    }

    printf("Result: %.2lf\n", result);
}

void solve_simultaneous_equations() {
    double a1, b1, c1, a2, b2, c2, x, y;
    printf("Enter coefficients for first equation (a1, b1, c1): ");
    scanf("%lf %lf %lf", &a1, &b1, &c1);
    printf("Enter coefficients for second equation (a2, b2, c2): ");
    scanf("%lf %lf %lf", &a2, &b2, &c2);

    double det = a1 * b2 - a2 * b1;
    if (det == 0) {
        printf("No unique solution\n");
        return;
    }

    x = (c1 * b2 - c2 * b1) / det;
    y = (a1 * c2 - a2 * c1) / det;

    printf("Solution: x = %.2lf, y = %.2lf\n", x, y);
}

void complex_operations() {
    Complex num1, num2, result;
    double magnitude;

    // Input the real and imaginary parts of two complex numbers
    printf("Enter real and imaginary parts of first complex number: ");
    scanf("%lf %lf", &num1.real, &num1.imag);
    printf("Enter real and imaginary parts of second complex number: ");
    scanf("%lf %lf", &num2.real, &num2.imag);

    // Addition of complex numbers
    result = add_complex(num1, num2);
    printf("Sum: %.2lf + %.2lfi\n", result.real, result.imag);

    // Subtraction of complex numbers
    result = subtract_complex(num1, num2);
    printf("Difference: %.2lf + %.2lfi\n", result.real, result.imag);

    // Multiplication of complex numbers
    result = multiply_complex(num1, num2);
    printf("Product: %.2lf + %.2lfi\n", result.real, result.imag);

    // Magnitude of the first complex number
    magnitude = magnitude_complex(num1);
    printf("Magnitude of first complex number: %.2lf\n", magnitude);
}
