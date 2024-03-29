#include <stdio.h>

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

// Function to subtract two numbers
int sub(int a, int b) {
    return a - b;
}

// Function to multiply two numbers
int mul(int a, int b) {
    return a * b;
}

// Function to divide two numbers
int div(int a, int b) {
    if (b == 0) {
        fprintf(stderr, "Error: Division by zero\n");
        return 0;
    }
    return a / b;
}

// Function to calculate the remainder of the division
int mod(int a, int b) {
    if (b == 0) {
        fprintf(stderr, "Error: Modulo by zero\n");
        return 0;
    }
    return a % b;
}

