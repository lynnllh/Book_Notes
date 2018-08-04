#include <stdio.h>

int FindInteger(int array[], int n)
{
	int x,y;
	x=y=0;
	do
	{
		x=array[array[x]];
		y=array[y];

	}while(x!=y);
	x=0;
	do
	{
		x=array[x];
		y=array[y];

	}while(x!=y);
	return x;
}
int main()
{
	int array[]={1,2,4,3,5,3};
	int length=sizeof(array)/sizeof(array[0]);
	printf("%d\n",FindInteger(array,length));
	return 0;
}