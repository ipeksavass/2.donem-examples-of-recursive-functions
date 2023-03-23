#include <stdio.h>
#include <stdlib.h>
long fibonacci(long);
int main(){
	int i;
	printf("dizinin hangi elemanini bulmak istersin:");  scanf("%d",&i);
	fibonacci(i);
	printf("%ld",fibonacci(i));
	return 0;
	
}
long fibonacci(long y){
	if(y>=0){
		if(y==0||y==1)
			return y;
		else
			return fibonacci(y-1) + fibonacci(y-2);
	}
	return 0;
}
