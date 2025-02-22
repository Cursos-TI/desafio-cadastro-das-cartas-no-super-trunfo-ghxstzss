#include <stdio.h>

int main(){

    char Estado;
    char CodigoCarta[3];
    char nomeCidade[80];
    int populaçao;
    float areaKm;
    float pib;
    int pontosTuristicos;

    printf("Bem Vindo Ao Jogo De Cartas! \n");

    printf("Digite a Inicial Do Estado e o Código de 01 a 03: \n");
    scanf("%c", &Estado);
    scanf("%2s", &CodigoCarta);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", &nomeCidade);

    printf("Digite a População: \n");
    scanf("%f", &populaçao);

    printf("Digite a AreaKM: \n");
    scanf("%f", &areaKm);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite os Pontos Turísticos: \n");
    scanf(" %f", &pontosTuristicos);

    return 0;
    
    
    
}
