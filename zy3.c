#include<stdio.h>
int main(){
	int age;
	while(scanf("%d",&age)!= EOF){
		getchar();
		switch(age){
		case 2:
		printf("Lower class\n");break;	
		case 3:
		printf("Lower class\n");break;
		case 4:
		printf("Middle class\n");break;
		case 5:
		printf("Higher class\n");break;
		case 6:
		printf("Higher class\n");break;
		default :
		printf("Error age\n");
		}
	}
}

