#include<stdio.h>
#include<string.h>

char xor(char a,char b)
{
	if(a==b)
	return '0';
	else
	return '1';
}


void main()
{
	char msg[100],g[10],x1[10],rem[10],rcv[100];
	int m,n;
	printf("Enter the message : ");
	scanf("%s",msg);
	int i=0;
	printf("\nEnter Divisor : ");
	scanf("%s",g);
	n=strlen(g);
	m=strlen(msg);
	for(int i=m;i<m+n-1;i++)
	{
		msg[i]='0';
	}
	printf(" After appending zeroes the message : %s",msg);
	
	int j=0,f=-1,k=0;
	for(int i=0;i<n;i++)
	{
			x1[i]=msg[j++];
	}
	int c=0;
	while(msg[j]!='\0')
	{
		k=0;
		for(int i=0;i<n;i++)
		{
			rem[i]=xor(x1[i],g[i]);
		}
		while(rem[k]!='1')
		{
			k++;
		}
		int q=0,p=k;
		while(rem[p]!='\0')
		{
			x1[q++]=rem[p++];
		}
		for(int r=0;r<k;r++)
		{
			x1[q++]=msg[j++];
		}
		printf("\nResult : %s\n X1 : %s\n Iter %d\n K val : %d\n",rem,x1,c,k);
		c++;
	}
		k=0;
		for(int i=0;i<n;i++)
		{
			rem[i]=xor(x1[i],g[i]);
		}
		while(rem[k]!='1')
		{
			k++;
		}
		int q=0,p=k;
		while(rem[p]!='\0')
		{
			x1[q++]=rem[p++];
		}
		printf("\nReminder : %s",rem);		
}
	
	 	
