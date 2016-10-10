#include<stdio.h>
int main(){
	int mark;
	while(1){
		printf("Input the mark 1-100:");
		scanf("%d",&mark);
		getchar();
		mark=mark/10; 
		switch(mark){
		case 10:
		printf("A\n");break;	
		case 9:
		printf("A\n");break;
		case 8:
		printf("B\n");break;
		case 7:
		printf("C\n");break;
		case 6:
		printf("D\n");break;
		case 5:
		printf("E\n");break;
		case 4:
		printf("E\n");break;
		case 3:
		printf("E\n");break;
		case 2:
		printf("E\n");break;
		case 1:
		printf("E\n");break;
		case 0:
		printf("E\n");break;
		default :
		printf("Score is error!\n");
	}
}
	return 0;
}

