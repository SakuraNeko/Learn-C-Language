#include<stdio.h>
int main(){
	int s;
	float s,p,w,d,f;
		printf("距离:");
		scanf("%f",&s);
		printf("单价:");
		scanf("%f",&p);
		printf("重量:");
		scanf("%f",&w); 
		switch(s/250){
		case 0:d=0;break;	
		case 1:	
		case 2:d=0.02;break;
		case 3:	
		case 4:d=0.05;break;	
		case 5:	
		case 6:
		case 7:
		case 8:d=0.08;break;
		case 9:
		case 10:
		case 11:d=0.1;break;	
		default :d=0.15; 
	}
	f=p*w*s*(1-d);
	printf("价格：%.2f元\n",f);

}

