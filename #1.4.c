#include<stdio.h>
#include<stdlib.h>
struct std
{
    char name[50];
    int rollno;
    char address[100];
    char phone_number[9];
};
int main()
{
    /*
    FILE *SR;
    struct std s[10];
    int n;
    int j=0;
    printf("Enter the number of student's data you wanna enter?\n");
    scanf("%d",&n);
    SR = fopen("Student.txt","w+");
    for(int i=0;i<n;i++)
    {
        printf("\nName:\n>");
        fflush(stdin);
        scanf("%[^\n]",s[i].name);
        fprintf(SR,"%s",s[i].name);
        fprintf(SR,"\n");
        printf("\nRoll No.:\n>");
        scanf("%d",&s[i].rollno);
        fprintf(SR,"%d",s[i].rollno);
        fprintf(SR,"\n");
        printf("\nAddress:\n>");
        fflush(stdin);
        scanf("%s",s[i].address);
        fprintf(SR,"%s",s[i].address);
        fprintf(SR,"\n");
        printf("\nPhone No.:\n>");
        fflush(stdin);
        scanf("%s",s[i].phone_number);
        fprintf(SR,"%s",s[i].phone_number);
        fprintf(SR,"\n");
    }
    fclose(SR);*/
    struct std s[10];
    int n;
    int j=0;
    FILE *PR;
    PR = fopen("Student.txt","r");
    printf("\nName\t\t\tRoll NO.\tAdress\t\t\tPhone No.\n");
    fflush(stdin);
    while(fscanf(PR,"%[^'  '] %d %s %s",s[j].name,&s[j].rollno,s[j].address,s[j].phone_number)!=EOF)
    {
        printf("%s\t\t\t%d\t\t\t%s\t\t\t\t%s",s[j].name,s[j].rollno,s[j].address,s[j].phone_number);
        printf("\n");
        j+=1;
        fflush(stdin);
    }
    fclose(PR);
    return 0;
}
