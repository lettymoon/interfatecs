#include <stdio.h>

int somadosvalores(int c){
    
    int soma = 0;
    int valor = c;
    while(valor > 0){
        soma += (valor%10);
        valor /= 10;
    }
    
    return soma;
}

int main(void){
    
    int c;
    scanf("%d", &c);
    
    if((somadosvalores(c) % 2) == 0)
        printf("dumbinho\n");
    else
        printf("8-bonito\n");

    return 0;
}