#include <stdio.h>
int main(){
	int i;
	i=1;
	while(i<=20){
		if(i%2==0&&i%3==0){
			printf("���Ϊ��%d\n",i);
		}
		i=i+1;
	}	
} 

