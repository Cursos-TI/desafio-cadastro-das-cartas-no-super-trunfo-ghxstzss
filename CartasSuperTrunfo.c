#include <stdio.h>

int main(){

    //declaraçao das variaveis

    char Estado1;
    char CodigoCarta1[3];
    char nomeCidade1[100];
    int populacao1;
    float areakm1;
    float pib1;
    int pontosTuristicos1;
    float DensidadePopulacional1;
    float PibPerCapita1;
    
    char Estado2;
    char CodigoCarta2[4];
    char nomeCidade2[100];
    int populacao2;
    float areakm2;
    float pib2;
    int pontosTuristicos2;
    float DensidadePopulacional2;
    float PibPerCapita2;
    
    //CADASTRO DA PRIMEIRA CARTA

    printf("Bem Vindo ao Jogo De Cartas!!!: \n");

    printf("Digite a Inicial Do Estado e o Código da primeira carta de 01 a 03: \n");
    scanf("%c", &Estado1);
    scanf("%2s", &CodigoCarta1);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", &nomeCidade1);

    printf("Digite a População: \n");
    scanf("%d", &populacao1);

    printf("Digite a AreaKM: \n");
    scanf("%f", &areakm1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite os Pontos Turísticos: \n");
    scanf(" %d", &pontosTuristicos1);
    
    //CALCULO DENSIDADE E PIB PER CAPITa

    DensidadePopulacional1 = (populacao1 / areakm1);
    PibPerCapita1 = (pib1 / populacao1);
 
    printf("Densidade Populacional: %f\n", DensidadePopulacional1);
    printf("Pib Per Capita:R$ %f\n", PibPerCapita1);  
    
    printf("------------------------------------------------------------\n");                                                                                                      
    //CADASTRO SEGUNDA CARTA

    printf("Digite a Inicial Do Estado e o Código da Segunda carta de 04 a 08: \n");
    scanf("%c", &Estado2);
    scanf("%4s", &CodigoCarta2);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", nomeCidade2);

    printf("Digite a População: \n");
    scanf("%d", &populacao2);

    printf("Digite a AreaKM: \n");
    scanf("%f", &areakm2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite os Pontos Turísticos: \n");
    scanf(" %d", &pontosTuristicos2);
    
    //CALCULO DENSIDADE E PIB PER CAPITA

    DensidadePopulacional2 = (populacao2 / areakm2);
    PibPerCapita2 = (pib2 / populacao2);

    printf("Densidade Populacional: %f\n", DensidadePopulacional2);
    printf("Pib Per Capita:R$ %f\n", PibPerCapita2);



    return 0;
       
}
