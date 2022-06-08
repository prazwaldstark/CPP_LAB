//WAP to find position of a character in a sentence using pointer!
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char sent[100]="idea without execution is worthless";
    for(int i=0;i<strlen(sent);i++)
    {
        if(sent[i]=='c')
        {
            printf("The position of 'c' in the sentence is: %d",i+1);
            break;
        }
    }
    return 0;
}
*/
//Using Pointer
#include<stdio.h>
int main()
{
    int count = 0;
    char sent[100]="idea without execution is worthless";
    char *add;
    add = sent;
    while(*add!='c')
    {
        add+=1;
        count+=1;
    }
    printf("The position of 'c' in the sentence is: %d",count+1);
    return 0;
}
