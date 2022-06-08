#include<stdio.h>
#include<stdlib.h>
struct std
{
    char name[50];
    int rollno;
    char address[100];
    long int phone_number;
};
int main()
{
    FILE *SR
    struct std s[10];
    int n;
    printf("Enter the number of student's data you wanna enter?\n");
    scanf("%d",&n);
    SR = fopen("Student.txt",'a+');
    for(int i=0;i<n;i++)
    {
        printf("\nName:\n>");
        scanf("%s",s[i].name);
        fprintf(SR,"%s",s[i].name);
        printf("\nRoll No.:\n>");
        scanf("%d",&s[i].rollno);
        fprintf(SR,"%d",&s[i].rollno);
        printf("\nAddress:\n>");
        scanf("%s",s[i].address);
        fprintf(SR,"%s",s[i].address);
        printf("\nPhone No.:\n>");
        scanf("%d",&s[i].phone_number);
        fprintf(SR,"%d",&s[i].phone_number);
    }
    fclose(SR);
    SR = fopen("Student.txt",'r');
    while(fscanf())
    return 0;

}