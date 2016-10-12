#include <stdio.h>
int main(){
	int T,N,BA,BCP,WJ;
	while(scanf("%d %d %d %d",&N,&BA,&BCP,&WJ) != EOF){
	if(WJ==1){
		BA=BA+80;
		BCP=BCP+20;
		for(;N>0;N--){
			T=BCP*N/100;
			if(T==1){BA=BA*2.5;printf("True %d\n",BA);break;}
			if(N==1){printf("False\n");}
		}
	}
	if(WJ==0){
		for(;N>0;N--){
			T=BCP*N/100;
			if(T==1){BA=BA*2;printf("True %d\n",BA);break;}
			if(N==1){printf("False\n");}
		}
	}
}
} 
