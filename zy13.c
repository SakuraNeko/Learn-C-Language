#include<stdio.h>
int main()
{
    int x;
    char ch=1;
    int t=0;
    while(scanf("%d",&x)!=EOF)
    {
        ch=getchar();
        if(x>168)    continue;
        else        {printf("CRASH %d\n",x);t=1;break;}
    }
    if(t==0)    printf("NO CRASH\n");    
    return 0;
}
