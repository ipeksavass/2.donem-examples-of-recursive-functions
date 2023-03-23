#include <stdio.h>
#include <stdlib.h>
long fibonacci(long num){
	if(num == 0 || num == 1)
		return num;
	else 
		return fibonacci(num-1) + fibonacci(num-2);
	
}

int main(){
	long i,sayi;
	printf("eleman sayisi:");
	scanf("%d",&sayi);
	for(i=1;i<=sayi;i++){
		printf("%d. eleman: %ld\n",i,fibonacci(i));
	}
}
