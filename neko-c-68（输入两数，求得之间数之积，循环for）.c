#include <stdio.h>
int main(){
	int i,n;
	long int Prod;
	Prod=1;
	printf("ÊäÈëÕûÊı£º");
	scanf("%d",&n);
		for(i=1;i<=n;i=i+1){
			Prod=Prod*i;
	}
	printf("%d!=%ld",n,Prod);
}
 


