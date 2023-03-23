#include<stdio.h>
#include<stdlib.h>
int cift(int);
int main(){
	int sayim;
	printf("sayim:");   scanf("%d",&sayim);
	cift(sayim);
	return 0;
	
}

int cift(num){
	if(num>=0){
		if(num % 2 == 0)
			printf("%d\n",num);
		cift(num - 1);
	}
	return 0;
}
