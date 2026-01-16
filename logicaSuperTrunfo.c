#include <stdio.h>
#include <strin.h>
#include <stdlib.h>


//Estrutura para armazenar os dados de uma carta
typedef struct logicaSuperTrunfo{
    char nomePais [50];
    float area;   //Km2
    long popilaçao;  //habitantes 
    float pib;  /// em bilhoes de dolares
    int pontosTuristicos;  
}carta;


// funcao para ler uma carta vom validacao
void LerCarta (Carta *c){
    pritnt("digite o nome do ´pais:");
    scanf("%[^\n]", c->nomePais);


    printf ("digite a area (km2):";
    while (scanf("%f", &c->area ))!='  || c->area'< =0 {
        printf ("Valor invalido. Digite novamente:");
    whilw (getchar()!='\n'); // limpa buffer

    }
    printf ("Digite a populçao:");
    
}