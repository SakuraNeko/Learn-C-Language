#include<stdio.h>
int main(){
	char grade;
	while(1){
		printf("Input a LevelA B C D E or F:");
		scanf("%c",&grade);
		getchar(); 
		if(grade=='A'){
		printf("90~100\n");
		}
		else if(grade=='B'){
		printf("80~89\n");
		}
		else if(grade=='C'){
		printf("70~79\n");
		}
		else if(grade=='D'){
		printf("60~69\n");
		}
		else if(grade=='E'){
		printf("0~59\n");
		}
		else {
		printf("Score is error!\n");
		}
	
}
	return 0;
}
