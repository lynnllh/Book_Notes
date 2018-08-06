#include <stdio.h>

int isArrayRepeat(int * a, int n)
{
	int j=-1;
	for(int i=0;i<n;i++)
	{
		j=a[i];
		if(i==j-1)
			continue;
		if(a[i]==a[j-1])
			return 1;
		a[i]=a[j-1];
		a[j-1]=j;
		i--;
	}
	return 0;
}

int main()
{
	int result=-1;
	int a[10]={10,9,5,4,7,6,3,2,1,9};
	result=isArrayRepeat(a,10);
	printf("%d\n",result);
}