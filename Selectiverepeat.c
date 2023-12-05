#include<stdio.h>
void main()
{
	int n,frame[100],ack;
	printf("Enter The Frame size : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		frame[i]=i+1;
		printf("Frame %d sent data : %d\n",i,frame[i]);
	}
	printf("\nEnter the frame whose acknowledgemet is not recieved : ");
	scanf("%d",&ack);
	printf("Frames sent again : \n");
		printf("Frame %d sent data : %d\n",ack,frame[ack]);
}	
