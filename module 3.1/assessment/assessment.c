#include<stdio.h>
matrix_multiplication(int a[2][2] , int b[2][2] , int c[2][2])
{
	int row,collum,k,temp=0;
	for(row=0;row<2;row++)
	{
		for(collum=0;collum<2;collum++)
		{
			for(k=0;k<2;k++)
			{
				temp+=a[row][k]*b[k][collum];
			}
			c[row][collum]=temp;

		}
	}
}
show_matrix(int m1[2][2])
{
	int row,collum;
	for(row=0;row<2;row++)
	{
		for(collum=0;collum<2;collum++)
		{
			printf("%d",m1[row][collum]);
		}
		printf("\n ");
	}
}
int getdata(int m1[2][2])
{
	int row,collum;
	for(row=0;row<2;row++)
	{
		for(collum=0;collum<2;collum++)
		{
			printf("enter element: ");
			scanf("%d",&m1[row][collum]);
		}
	}
}
int main()
{
	int m1[2][2],m2[2][2],ans[2][2];
	getdata(m1);
	show_matrix(m1);
	getdata(m2);
	show_matrix(m2);
	matrix_multiplication(m1,m2,ans);
	show_matrix(ans);
	return 0;
}
