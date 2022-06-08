#include<stdio.h>
int main()
{
    int set[3]={1,2,3};
    int *att;
    att = set;
    printf("%d\n",set);
    printf("%d\n",*att);
    printf("%d",*(att+1));
}