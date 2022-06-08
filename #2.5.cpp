#include<cstdio>
float final_salary(int salary)
{
    return (salary-(0.1*salary));
}
int main()
{
    int salary;
    printf("Enter your salary:\n> Rs");
    scanf("%d",&salary);
    printf("\nYour final salary:\n> Rs%.2f",final_salary(salary));
    return 0;
}
