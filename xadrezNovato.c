#include <stdio.h>
int main() {
   
    //Movimentação da torre

    for(int movimentoT = 1; movimentoT <= 5; movimentoT++) {

        printf(".Torre vai uma casa para a direita\n");
    }
    printf("\n"); 

    //Movimentação da rainha
    
    int movimentoR = 1; 
    do{
        printf(".Rainha vai uma casa para a esquerda\n");
        movimentoR++; 
    } while (movimentoR <= 8); 
    
        printf("\n"); 


    //Movimentação do bispo 

    int movimentoB = 1; 

    while(movimentoB <= 5) {

        printf(".Bispo 1 casa para cima, direita\n"); 
        movimentoB ++; 
    }

    return 0; 
}
