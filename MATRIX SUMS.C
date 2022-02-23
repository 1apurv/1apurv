#include<stdio.h>
#include<conio.h>
void main()
{
	int m1[3][3],m2[3][3],m3[3][3],i,j;
	clrscr();
	//logic:Input value into 2D-Array
	for(i=0;i<3;i++)   //row
	{
		for(j=0;j<3;j++)  //column
		{
			printf("\nEnter Value m1[%d][%d]",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
	for(i=0;i<3;i++)   //row
	{
		for(j=0;j<3;j++)  //column
		{
			printf("\nEnter Value m2[%d][%d]:",i,j);
			scanf("%d",&m2[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",m1[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",m2[i][j]);
		}
		printf("\n");
	}
	printf("Sum of both matrix is : \n");
	for(i=1;i<3;i++)
	{
		for(j=1;j<3;j++)
		{
			m3[i][j]=m1[i][j]+m2[i][j];
			printf("%d\t",m3[i][j]);
		}
	printf("\n");
	}
	getch();
}




