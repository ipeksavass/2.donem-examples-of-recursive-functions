#include<stdio.h>
int sum(int);
int main()
{
	int N,sonuc;
	printf("N degerini giriniz:");  //N hangi dogal sayiya kadar gidilecegini belirtiyor.
	scanf("%d",&N);
	sonuc = sum(N);
	printf("%d",sonuc);
	return 0;
}

int sum(int A){
	if(A>0)
		return A + sum(A-1);
	else
		return 0;
}
