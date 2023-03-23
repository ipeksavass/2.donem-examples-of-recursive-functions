#include<stdio.h>
int a=1;
int carpTablosu(){
	int k,sonuc;
	if(a<11){
	for(k=1;k<11;k++){
		sonuc = a * k ;
		printf("%d x %d = %d\n",a,k,sonuc);
	}
	printf("<----------->\n");
	a++;
	carpTablosu();
	}
}

int main(void)
{
	printf("---CARPIM TABLOSU---\n");
	carpTablosu();
	return 0;
}
