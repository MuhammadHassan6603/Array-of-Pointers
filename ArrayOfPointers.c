#include<stdio.h>
void main()
{
	int *arr[4];
	int i=10,j=20,k=30,l=40,m;
	arr[0]=&i;
	arr[1]=&j;
	arr[2]=&k;
	arr[3]=&l;
	for(m=0;m<4;m++)
	{
		printf("%d\n",*arr[m]);
	}
}
