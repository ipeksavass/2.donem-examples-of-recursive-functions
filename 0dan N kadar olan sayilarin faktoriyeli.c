#include <stdio.h>
#include <stdlib.h>
long faktoriyel(int sayi){
	if(sayi>=0){
		if(sayi==0 || sayi==1)
			return 1;
		else
			return sayi * faktoriyel(sayi-1);
}
}

int main(){
	int number,i;
	printf("number:");  scanf("%d",&number);
	for(i=0;i<=number;i++){
		faktoriyel(number);
		printf("%d. sayinin faktoriyeli: %d\n",i,faktoriyel(i));
	}
	return 0;
}
