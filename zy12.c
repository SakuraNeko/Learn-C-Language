#include<stdio.h>
int main()
{
    int a,b,c,T,S=168; 
    while(scanf("%d %d %d",&a,&b,&c)!=EOF){
    	{
		if(a<b){
			T=a;a=b;b=T;
		}
		else if(a<c){
			T=a;a=c;c=T;
		}
		else if(b<c){
			T=b;b=c;c=T;
		}}
        if(T>=a){
		printf("CRASH %d\n",a);
		}
        else{
		printf("NO CRASH\n");
		}
    }
}
