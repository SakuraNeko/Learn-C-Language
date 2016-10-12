#include <stdio.h>
int main()
{
	int a,b,c,d,e;
	while(scanf("%d %d %d %d %d",&a,&b,&c,&d,&e) != EOF)
	{
		printf("%d\n",100-a-b-c-d-e);
	}
}
