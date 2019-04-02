#include<stdio.h>
void main()
{
	int bt[10],pro[10],ta[10],pri[10],tat,i,j,p,temp;
	printf("Enter Burst Time:\n");
	for(i=0;i<5;i++)
	{
		printf("p%d:",i+1);
		scanf("%d",&bt[i]);
		scanf("%d",&pri[i]);
		pro[i]=i+1;
	}
	for(i=0;i<5;i++)
	{
		p=i;
		for(j=i+1;j<5;j++)
		{
			if(bt[j]<bt[p])
			{
			p=j;
		    }
			else if(bt[j]==bt[p])
			{
				if(pri[j]>pri[i])
				{
			       p=j;
			    }
		    }
		}
