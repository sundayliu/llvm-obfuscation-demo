/*
 * instruction substitution test
 */

//#include <iostream>
//using namespace std;

#include <stdio.h>
//#include <vector>
//using namespace std;
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

void test_sub()
{
    int a = 4;
    int b = 1100;
    int c = 4;
    
    c = 4 + a + b - c;
    printf("c:%d\n", c);
    
    c = c / a;
    printf("c:%d\n",c);
    
    a = a + c + b;
    printf("a:%d\n",a);
}
int main(int argc, char* argv[])
{
    printf("+++ Instruction Substitution Test +++\n");
    int a = 0x100;
    int b = 0x200;
    
    printf("%d + %d = %d\n", a, b, t_addition(a,b));
    printf("%d - %d = %d\n", a, b, t_subtraction(a, b));
    printf("%d & %d = %d\n", a, b, t_AND(a,b));
    printf("%d | %d = %d\n", a, b, t_OR(a,b));
    printf("%d ^ %d = %d\n", a, b, t_XOR(a,b));
    
    test_sub();

    /*
    vector<int> vec_a;
    for (int i = 0; i < 10; i++)
    {
        vec_a.push_back(i);
    }
    
    vector<int>::iterator it = vec_a.begin();
    while (it != vec_a.end())
    {
        printf("%d\n", *it);
    }
    */
    return 0;
}
