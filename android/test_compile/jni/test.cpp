#include <stdio.h>
#include <iostream>
using namespace std;
#include <time.h>
#include <stdlib.h>

int __random()
{
    static bool flag = false;
    if (!flag)
    {
        srand(time(NULL));
        flag = true;
    }

    int r = rand();
    return ++r;
}

float __random_float()
{
    float x = 124.0f;
    int r =  __random();
    return r/x;
}

void test_compile()
{
    for (int i = 0; i < 6000; i++)
    {
        unsigned char a = 0;
        unsigned char b = 0;
        float r = __random_float();
        // a = r;
        a = b = r;
        printf("[%06d]%x,%x\n",i,a,b);
    }    
}
int main()
{
    printf("Hello,world\n");
    test_compile();
    return 0;
}

