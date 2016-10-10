#include<stdio.h>
int main(){
	char grade;
	while(1){
		printf("Input a LevelA B C D E or F:");
		scanf("%c",&grade);
		getchar(); 
		switch(grade){
		case'A':
		printf("90~100\n");break;
		case'B':
		printf("80~89\n");break;
		case'C':
		printf("70~79\n");break;
		case'D':
		printf("60~69\n");break;
		case'E':
		printf("0~59\n");break;
		default :
		printf("Score is error!\n");
	}
}
	return 0;
}

