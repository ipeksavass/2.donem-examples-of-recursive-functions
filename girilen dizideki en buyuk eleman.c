#include<stdio.h>
#include<stdlib.h>
int N;
int enBuyuk(int[]);

int main(){
	int array[100],N,i,maks;
	printf("dizinin eleman sayisi:");  
	scanf("%d",&N);
	
	for(i=0;i<N;i++){
		printf("%d. eleman:",i+1);
		scanf("%d",&array[i]);
	}
	maks=enBuyuk(array);
	printf("en buyuk eleman:%d",maks);
	return 0;
}

int enBuyuk(int a[]){
	static int i=0;
	static int maksimum=-9999;
	if(i<N){
		if(a[i]>maksimum)
			maksimum=a[i];
		i++;
		enBuyuk(a);
	}
	return maksimum;
}
