#include <stdio.h>
#include <stdlib.h>
int kuvvetAlma(int sayi,int us){
	if(us==0)
		return 1;
	else
		return sayi * kuvvetAlma(sayi,us-1);
	
}

int main(){
	int sayi,kuvvet,sonuc;
	printf("sayi:");  scanf("%d",&sayi);
	printf("kuvvet:");   scanf("%d",&kuvvet);
	sonuc=kuvvetAlma(sayi,kuvvet);
	printf("%d^%d= %d",sayi,kuvvet,sonuc);
	return 0;
}
