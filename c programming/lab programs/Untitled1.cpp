 #include<stdio.h>
 int main()
 {
 	int a[100],i,j,temp[100],count,n;
 	printf("enter n elements");
 	scanf("%d",&n);
 	printf("Enter array elements");
 	for(i=0;i<n;i++)
 	{
 	scanf("%d",&a[i]);
 	temp[i]=-1;
	}
	for(i=0;i<n;i++)
	{
		count=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
				temp[j]=0;
			}
			if(temp!=0)
			{
				temp[i]=count;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(temp[i]>1)
		printf("%d\n",a[i]);
	}
 }
