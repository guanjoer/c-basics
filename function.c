#include <stdio.h>

// 선언
void p(int num);

// Declare function that No have return value
void func_without_return();

// Declare function that have return value
int func_with_return();

// Declare function that have params
void func_with_params(int num1, int num2, int num3);

// Declare function that have return value & params
int minus_calc(int num1, int num2);

// Declare Calculator function
int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
float div(int num1, int num2);

int main_function(void)
{
//    int num = 7;
//    p(num);

//    func_without_return();

//    int res = func_with_return();
//    p(res);

//    func_with_params(7, 8, 9);

//    int res = minus_calc(10, 1);
//    printf("The First result is %d\n", res);
//
//    printf("The Second result is %d\n", minus_calc(100, 20));

    int num1;
    int num2;

    printf("Type First number: ");
    scanf("%d", &num1);

    printf("Type Second number: ");
    scanf("%d", &num2);

    printf("\n\n");
    printf("--------------------------------------\n");
    printf("[+]Addition result: %d\n", add(num1, num2));
    printf("[-]Subtraction result: %d\n", sub(num1, num2));
    printf("[*]Multiply result: %d\n", mul(num1, num2));
    printf("[/]division result: %.1f\n", div(num1, num2));


    return 0;
}

// 정의
void p(int num)
{
    printf("The number is %d\n", num);
}

void func_without_return()
{
    printf("This is a function that no have return value.\n");
}

int func_with_return()
{
    printf("This is a function that have return value.\n");
    return 11;
}

void func_with_params(int num1, int num2, int num3)
{
    printf("The pameters are %d, %d, %d\n", num1, num2, num3);
}

int minus_calc(int num1, int num2)
{
    return num1 - num2;
}

// Calculator
int add(int num1, int num2)
{
    return num1 + num2;
}
int sub(int num1, int num2)
{
    return num1 - num2;
}
int mul(int num1, int num2)
{
    return num1 * num2;
}
float div(int num1, int num2)
{
    return num1 / num2;
}
