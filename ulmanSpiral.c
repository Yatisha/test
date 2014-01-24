#include<stdio.h>

int arr[7][7];
int count=1;
int cons =0;
int k;
int n=7;
void print_spiral();
void draw_spiral(int);
void main()

{
	
	draw_spiral(n);
	print_spiral();
	
	
}

void draw_spiral(int n)
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
		for(k = cons;k<n+cons;k++)
		{
			
			arr[k][cons]=count;
			count++;
		}
		for(k = 1 + cons;k<n+cons;k++)
		{
			arr[n-1+cons][k]=count;
			count++;
		}
		for(k = n-2+cons;k >=cons;--k)
		{
			arr[k][n-1+cons]=count;
			count++;
		}
		for(k = n-2+cons;k >cons;--k)
		{
			arr[cons][k]=count;
			count++;
		}
		n=n-2;
		cons++;
		draw_spiral(n);
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
				printf("%d	",arr[l][m]);
			}
		printf("\n");
	}

}
