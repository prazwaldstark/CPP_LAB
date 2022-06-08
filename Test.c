#include<stdio.h>
int main()
{
    /*int set[3]={1,2,3};
    int *att;
    att = set;
    printf("%d\n",set);
    printf("%d\n",*att);
    printf("%d",*(att+1));*/
    FILE *pr;
    char name[50];
    pr = fopen("HelloWorld.txt","a+");
    fprintf(pr,"Hello World");
    scanf("%s",name);
    //fscanf(pr,"%s",name);
    fclose(pr);
    return 0;
}