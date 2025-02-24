#include <stdio.h>

int main(){

    //declaraçao das variaveis

    char Estado1, Estado2;
    char CodigoCarta1, CodigoCarta2[3];
    char nomeCidade1, nomeCidade2[100];
    int populacao1, populacao2;
    float areakm1, areakm2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float DensidadePopulacional1, DensidadePopulacional2;
    float PibPerCapita1, PibPerCapita2;
    
    //CADASTRO DA PRIMEIRA CARTA

    printf("Bem Vindo Ao Jogo De Cartas! \n");


    printf("Digite a Inicial Do Estado e o Código da primeira carta de 01 a 03: \n");
    scanf("%c", &Estado1);
    scanf("%2s", &CodigoCarta1);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", &nomeCidade1);

    printf("Digite a População: \n");
    scanf("%f", &populacao1);

    printf("Digite a AreaKM: \n");
    scanf("%f", &areakm1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite os Pontos Turísticos: \n");
    scanf(" %f", &pontosTuristicos1);
    
    //CALCULO DENSIDADE E PIB PER CAPITa

    DensidadePopulacional1 = (float) (populacao1 / areakm1);
    PibPerCapita1 = (float) (populacao1 / pib1);
 
    printf("Densidade Populacional: %f\n", DensidadePopulacional1);
    printf("Pib Per Capita: %f\n", PibPerCapita1);  
    
    //CADASTRO SEGUNDA CARTA

    printf("Digite a Inicial Do Estado e o Código da primeira carta de 01 a 03: \n");
    scanf("%c", &Estado2);
    scanf("%2s", &CodigoCarta2);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", &nomeCidade2);

    printf("Digite a População: \n");
    scanf("%f", &populacao2);

    printf("Digite a AreaKM: \n");
    scanf("%f", &areakm2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite os Pontos Turísticos: \n");
    scanf(" %f", &pontosTuristicos2);
    
    //CALCULO DENSIDADE E PIB PER CAPITA

    DensidadePopulacional2 = (float) (populacao2 / areakm2);
    PibPerCapita2 = (float) (populacao2 / pib2);

    printf("Densidade Populacional: %f\n", DensidadePopulacional2);
    printf("Pib Per Capita: %f\n", PibPerCapita2);



    return 0;
       
}
