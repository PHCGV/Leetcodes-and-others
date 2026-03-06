#include <stdio.h>
#include <stdlib.h>

int Maior(int n[], int tam, int indice){
	if (tam == 0)
		return n[indice];
	else{
		if (n[tam-1] > n[indice]){
			return Maior(n, tam - 1, tam - 1);
		}
		else 
		return Maior(n, tam - 1, indice);
	}
}

int main(){
	int n[10] = {1,2,3,4,55,6,7,8,9,10};
	int tam, indice;
	
	printf("O maior numero e igual a: %d", Maior(n, 10, 0));
}