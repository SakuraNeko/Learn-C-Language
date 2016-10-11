#include <stdio.h>
int main(){
	int i;
	int Sum;
	i=0;Sum=0;
	while(i<=20){
		if(i%2==0&&i%3==0){
			Sum=Sum+i;
		}
		i=i+1;
	}
	printf("½á¹ûÊÇ£º%d",Sum);
} 

