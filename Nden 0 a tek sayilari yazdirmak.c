#include <stdio.h>
#include <stdlib.h>
int tek(int);
int main(){
	int N;
	printf("N:");
	scanf("%d",&N);
	tek(N);
	return 0;
	
}

int tek(sayi){
	if(sayi>0){
		if(sayi % 2 == 1)
			printf("%d\n",sayi);
		tek(sayi - 1);
	}
	return 0;
}
