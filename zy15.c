#include<cstdio>
int main(){    
	int a,b,c,minx,maxn;    
	while(scanf("%d%d%d",&a,&b,&c)==3){        
		minx=a>b?b:a;        
		minx=minx>c?c:minx;        
		if(minx<168) printf("CRASH %d/n",minx);        
		else printf("NO CRASH/n");    }    
		return 0;
	}
