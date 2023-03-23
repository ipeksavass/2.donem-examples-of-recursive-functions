#include <stdio.h>
#include <stdlib.h>
long faktoriyel(long x){
	if(x>=0){
		if(x==0 || x==1)
			return 1;
		else
			return x * faktoriyel(x-1);
	}
	return 0;
}

int main(){
	int sayi;
	printf("sayi:");  scanf("%d",&sayi);
	faktoriyel(sayi);
	printf("%ld",faktoriyel(sayi));
	return 0;
}
