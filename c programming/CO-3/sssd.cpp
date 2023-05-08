#include<stdio.h>
int main()
{
    int a[3][3],i,j,a1=0,a2=0;
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i]>a[j])
            a1++;
            if(a[i]<a[j])
            a2++;

        }
    }
    printf("%d %d",a1,a2);

    return 0;
}

