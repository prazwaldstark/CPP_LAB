#include<cstdio>
struct date_format
{
    int mm;
    int dd;
    int yyyy;
};
int main()
{
    struct date_format date;
    printf("Enter the mm, dd and yyyy:\n>");
    scanf("%d %d %d",&date.mm,&date.dd,&date.yyyy);
    printf("The date in the format is:\n%d/%d/%d",date.mm,date.dd,date.yyyy);
    return 0;
}