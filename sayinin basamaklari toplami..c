#include<stdio.h>
#include<stdlib.h>
int basTop(int);
int main(){
	int sayi,toplam=0;
	printf("sayiyi giriniz:");
	scanf("%d",&sayi);
	toplam=basTop(sayi);
	printf("%d",toplam);
	return 0;
	
}

int basTop(int num){
	if(num != 0)
		return num%10 + basTop(num/10);
	else
		return 0;
}
