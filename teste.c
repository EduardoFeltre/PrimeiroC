#include <stdio.h>

int main(){
    int idade = 0;
    char nome[50];
    
    
    printf("Qual eh seu nome?");
    
    scanf("%s", &nome);
    printf("Seu nome eh %s\n", nome);
    
    
    
    printf("Qual eh sua idade:");
    
    scanf("%d", &idade);
    
    printf("Sua idade eh %d", idade);
      
    return 0;
}


