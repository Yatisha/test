#include<stdio.h>

int arr[5][5];
int count=1;
int cons =0;
int k;
int n=5;
void print_spiral();
void draw_spiral(int,int * );
void main()

{
	
	draw_spiral(n,&arr[0][0]);
	print_spiral();
	
	
}

void draw_spiral(int n, int * arr)
{	
	
	if(n==1)
	{
		arr[cons][cons]=count;
	}
	else if(n==0)
	{
	}
	else
	{
		for(k = 0;k<n;k++)
		{
			
			*(&arr[k][0])=count;
			count++;
		}
		for(k = 1;k<n;k++)
		{
			arr[n-1][k]=count;
			count++;
		}
		for(k = n-2;k >0;--k)
		{
			arr[k][n-1]=count;
			count++;
		}
		for(k = n-2;k >0;--k)
		{
			arr[0][k]=count;
			count++;
		}
		n=n-2;
		cons++;
		draw_spiral(n,&arr[cons]);
	}


}

void print_spiral()
{
	int m=0;
	int l =0;
	for(m=0;m<n;m++)
	{
		for(l=0;l<n;l++)
			{
				printf("%d",arr[l][m]);
			}
		printf("\n");
	}

}
