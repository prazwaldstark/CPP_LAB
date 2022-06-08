#include<cstdio>
int temp_comp(int &temp1, int &temp2)
{
    if (temp1>temp2)
        return temp1;
    else
        return temp2;
}
int main(){
    int t1,t2;
    printf("Enter Two Temperatures for comparison:\n");
    printf("Temperature 1 > ");
    scanf("%d",&t1);
    printf("Temperature 2 > ");
    scanf("%d",&t2);
    printf("The largest temperature of above two is: %d",temp_comp(t1,t2));
    return 0;
}