//Wap to find the total, avg exp. of a company in each year and also avg exp. over certain range of year!
#include<stdio.h>
int main()
{	
	int sum[10][11];
    int year[10],sum_each_year[10];
    sum_each_year[0]=0;
    int n;
    int sum_range_year=0;
    float avg_each_month=0;
    float avg_range_year=0;
    printf("Enter the how long is the range of years for the input sum!\n");
    scanf("%d",&n);
    for(int i = 0; i<n;i++)
    {
        printf("\nWhich year sum you want to enter?");
        scanf("\n%d",&year[i]);
        printf("\nEnter the sum: ");
        for (int j =0; j<12; j++)
        {
            scanf("\n%d",&sum[i][j]);
            sum_each_year[i]+= sum[i][j];
        }
        sum_range_year+=sum_each_year[i];
    }
    printf("\n\n        Total Sum\t\t Avg Expenditure in Each Month over a  Year\n\n");
    for(int i = 0; i<n;i++)
    {
        avg_each_month=(float)sum_each_year[i]/12;
        printf("\n%d\t%d\t\t\t\t\t%.2f",year[i],sum_each_year[i],avg_each_month);
    }
    avg_range_year=(float)sum_range_year/12;
    printf("\n\nAvg Expenditure in Each Year from %d to %d is: %.2f",year[0],year[n-1],avg_range_year);
    return 0;

}

