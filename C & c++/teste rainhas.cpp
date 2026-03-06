#include <stdio.h>
#include <stdbool.h>

#define N 5

void imprimirTabuleiro(int tabuleiro[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf("%d ", tabuleiro[i][j]);
        printf("\n");
    }
    printf("\n");
}

bool ESeguro(int matriz [N][N], int linha, int coluna){
	for(int i = 0; coluna > i; i++){
		if(matriz[linha][i])
		return false;
	}
	for(int i = linha, j = coluna; i >= 0 && j>= 0; i--, j--){
		if(matriz[i][j])
		return false;
	}
	for(int i = linha, j = coluna; i < N && j >= 0; i++, j--){
		if(matriz[i][j])
		return false;
	}
	return true;
}

bool ResolverRainha(int matriz [N][N], int coluna){
	if (coluna >= N) {
        imprimirTabuleiro(matriz);
        return true;
    }
	
	for(int i = 0; i < N; i++){
		if(ESeguro(matriz, i, coluna)){
		matriz[i][coluna] = 1;	
	
	if(ResolverRainha(matriz, coluna + 1)){
		return true;
	}
		
		
		matriz[i][coluna] = 0;
}
}
return false;
}

// Função principal
int main() {
    int tabuleiro[N][N] = {{0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0},
						   {0, 0, 0, 0, 0}
						   };

    if (!ResolverRainha(tabuleiro, 0))
        printf("Não há solução possível para o problema das 4 rainhas.\n");

    return 0;
}
