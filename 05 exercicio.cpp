#include <stdio.h>

void decBin(int n){
	printf("decBin(%d)\n",n);getch();
	if(n==0){
	  printf("Caso base\n");
     return;
 }
 decBin(n/2);//chamada recursiva
 printf("%d",n%2); getch();
}
int main (){
	int num;
	printf("Numero: ");
	scanf("%d", &num);
	decBin(num);
	return 0;
}
