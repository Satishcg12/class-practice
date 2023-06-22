#include<stdio.h>

// here  s = source d = destination a= auxlary
void toh(int n, char s,char d, char a){
    if (n==1){
        printf("move disk %d from %c to %c\n", n,s,d);
        return ;
    }
    toh(n-1,s,a,d);
    printf("move disk %d from %c to %c\n", n,s,d);
    toh(n-1,a,d,s);
}

int main()
{
    toh(3, 's', 'd','a');
}