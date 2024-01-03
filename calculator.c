//Claculator

#include<stdio.h>


void sum()
{
    int a, b;
    printf("Enter two numbers : \n");
    scanf("%d%d", &a, &b);
    int sum = a + b;
    printf("Sum of two numbers is : %d\n", sum);
}

void divide()
{
    int a, b;
    printf("Enter two numbers :\n ");
    scanf("%d%d", &a, &b);
    int divide = a / b;
    printf("Division of two numbers is : %d\n", divide);
}

void multiply()
{
    int a, b;
    printf("Enter two numbers :\n ");
    scanf("%d%d", &a, &b);
    int multiply = a * b;
    printf("Multiply of two numbers is : %d\n", multiply);
}

void subtraction()
{
    int a, b;
    printf("Enter two numbers : \n");
    scanf("%d%d", &a, &b);
    int subtraction = a - b;
    printf("Subtraction of two numbers is : %d\n ", subtraction);
}

int main()
{
    char cal;
    printf("Enter what operation you want to perform (+,-,*,/) : ");
    scanf("%c", &cal);

    switch (cal)
    {
    case '+':
        sum();
        break;

    case '-':
        subtraction();
        break;

    case '*':
        multiply();
        break;

    case '/':
        divide();
        break;

    default:
        break;
    }
}


