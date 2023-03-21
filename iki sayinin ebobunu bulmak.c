#include <stdio.h>
#include <stdlib.h>
int ebob(int,int);
int main(){
	int a,b;
	printf("iki sayi giriniz:");
	scanf("%d %d",&a,&b);
	if(a==0)
		return 0;
	else if (b==0)
		return 0;
	else{
		ebob(a,b);
		printf("en buyuk ortak bolen:%d",ebob(a,b));
		return 0;
	}
}

int ebob(a,b){
	if(b != 0){
		return ebob(b,a%b);
	}
	else
		return a;
}
