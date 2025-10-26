#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int matrix[8000][8000];row,colum,n;
int main()
{
    double start,end,time;
    start=clock();
    printf("Enter the amount of vertices= ");
    scanf("%d",&n);
    fill();
    result();
    end=clock();
    time=( end- start);
    printf("\nTime taken = %.2f ms",time);
}
void fill()
{
    srand(time(NULL));
    for(row=1;row<=n;row++)
        {
            for(colum=1;colum<=n;colum++)
        matrix[row][colum]=rand()%2;
        }
}
void result()
{
    int in_degree=0,out_degree=0;
    for(row=1;row<=n;row++)
    {
        for(colum=1;colum<=n;colum++)
            in_degree=matrix[row][colum]+in_degree;
    }
    for(row=1;row<=n;row++)
    {
        for(colum=1;colum<=n;colum++)
            out_degree=matrix[row][colum]+out_degree;
    }
    printf("Total In Degree= %d \nTotal Out Degree= %d",in_degree,out_degree);
}
