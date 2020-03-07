#include<stdio.h>

void fun(int a)
{
    printf("int a = %d", a);
}

void fun2(int b )
{
    printf("int b=", b);
}

int main()
{
    void (*fun_ptr[]) (int) = {fun,fun2};
    // (*fun_ptr) = &fun;
    (*fun_ptr)(10);

    void (*fun_ptr)(int) 
    return 0;
}



void func(int a)
{
    
}

 void (*func_ptr)(int a) = &func