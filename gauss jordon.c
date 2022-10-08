#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    float r;
    printf("enter order of matrix\n");
    scanf("%d",&n);
    float M[n][n+1];
    printf("enter the value of matrix\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            scanf("%f",&M[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            if(i!=j)
            {
              r=M[j][i]/M[i][i];
              for(int k=0;k<n+1;k++)
              {
                  M[j][k]=M[j][k]-r*M[i][k];
              }
            }
        }
    }
    
    for(int i=0;i<n;i++)
    {
        printf("the value is %f ",M[i][n]/M[i][i]);
    }
    return 0;
    
}