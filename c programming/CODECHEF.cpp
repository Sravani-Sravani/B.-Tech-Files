#include <stdio.h>
#include<math.h>
int main(void) 
{
    int t;
    scanf("%d",&t); 
    int i,j;
    for(i=1;i<=t;i++)
    {
        int f=0;
        int n;
        int p[1000];
        scanf("%d",&n);
        for(j=1;j<=n;j++)
        {
            scanf("%d",&p[j]);
        }
        for(j=1;j<=n;j++)
        {
            if((p[j]==5&&p[j+1]==10)||(p[j+1]==10&&p[j+2]==15))
            {
            f=1;
            break;
            }
            else
            {
            f=0;
            }
            
        }
        
        if(f==1)
        {
        printf("YES\n");
        }
        else
        {
        printf("NO\n");
        }
    }
	return 0;
}


