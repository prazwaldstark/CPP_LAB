#include<stdio.h>
struct std_data
{
    char name[50];
    int marks_c;
};
int main()
{
    struct std_data sd[10];
    int n;
    printf("Enter the number of entries: \n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("\nEnter the name of student:\n");
        scanf("%s",sd[i].name);
        printf("\nEnter the marks in Computer:\n");
        scanf("%d",&sd[i].marks_c);
    }
    printf("S.N.                NAME                \tMarks\n");
    for(int i = 0; i<n;i++)
    {
        printf("\n%d\t\t  %s\t\t%d\n",i+1,sd[i].name,sd[i].marks_c);
    }
    return 0;
}