#include<stdio.h>
  int main()
   {
   	  int a[5];
   	  int i,key,n=5;
   	  
   	printf("array element:");
   	for(i=0;i<n;i++)
   	{
   		scanf("%d",&a[i]);
	   }
		printf("\n key lement to search:");
		scanf("%d",&key);
		for(i=0;i<n;i++)
		{
			if(a[i]==key)
			{
			
			printf("\n%d Element found:");
            }
		else
		{
			printf("\n Element not found:");
		}
	}
		getch();
   }