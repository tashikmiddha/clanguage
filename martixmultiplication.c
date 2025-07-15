#include<stdio.h>
int main()
{
    int m ,n,k;
    printf("enter the value of m,n and k so the matrix are mxn and nxk\n");
    scanf("%d%d%d",&m,&n,&k);
    int arr[m][n],a[n][k],ans[m][k];
    printf("enter the 1 matrix\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("enter the 2 matrix\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<k;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<k;j++)
        {
            for(int l=0;l<n;l++)
            {
            ans[i][j]+=(arr[i][l]*a[l][j]);
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<k;j++)
        {
            printf("%d ",ans[i][j]);
        }
        printf("\n");
    }
    return 0;


}