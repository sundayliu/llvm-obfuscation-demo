/*
 * instruction substitution test
 */

#include <iostream>
using namespace std;

#include <stdio.h>
// +
int t_addition(int a, int b )
{
    int c = 0;
    c = a + b;
    return c;
}

int t_subtraction(int a, int b)
{
    int c = 0;
    c = a - b;
    return c;
}

int t_AND(int a, int b)
{
    int c = 0;
    c = a & b;
    return c;
}

int t_OR(int a, int b)
{
    int c = 0;
    c = a | b;
    return c;
}

int t_XOR(int a, int b)
{
    int c = 0;
    c = a ^ b;
    return c;
}
int main(int argc, char* argv[])
{
    cout << "+++ Instruction Substitution Test +++" << endl;
    int a = 0x100;
    int b = 0x200;
    
    printf("%d + %d = %d\n", a, b, t_addition(a,b));
    printf("%d - %d = %d\n", a, b, t_subtraction(a, b));
    printf("%d & %d = %d\n", a, b, t_AND(a,b));
    printf("%d | %d = %d\n", a, b, t_OR(a,b));
    printf("%d ^ %d = %d\n", a, b, t_XOR(a,b));
    
    return 0;
}
