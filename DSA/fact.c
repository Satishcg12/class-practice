#include<stdio.h>

int fact(int a){
    if (a ==0)
        return 1;
    return a* fact(a-1);
}

int main()
{
    int a;
    printf("Eneter your number: ");
    scanf("%d",&a);
    fact(a);
}