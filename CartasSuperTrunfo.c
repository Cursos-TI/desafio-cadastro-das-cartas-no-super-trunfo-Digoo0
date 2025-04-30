#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main(){
    
    //aqui definimos o estado da carta, de A até H.
    char estado[2];
        printf("Digite o Estado da sua Carta 1 de A a H: \n");
        scanf("%s", estado);
    
    //aqui definimos o código, de 01 a 04.
    char code[3];
        printf("Agora, digite um código para a carta 1 de 01 a 04: \n");
        scanf("%s", code);
    
    while ((getchar()) != '\n'); //aqui limpamos os lixos deixados pelo scanf
  
    //aqui definimos a cidade escolhida
    char city[50];
        printf("Digite o nome da cidade 1: \n");
        fgets(city, 50, stdin);
        city[strcspn(city, "\n")] = 0;
        
    
    //aqui definimos o tamanho da população
    unsigned long int popu;
        printf("Digite o tamanho da populaçao 1: \n");
        scanf("%lu", &popu);
 
    //aqui definimos a área da cidade
    float area;
        printf("Digite a area da sua cidade 1: \n");
        scanf("%f", &area); //lembrar do %2.f para limitar as casas decimais
   
    
    //definindo pib
    float pib;
        printf("Digite o pib da sua cidade 1: \n");
        scanf("%f", &pib);

    
    
    int turistico;
        printf("Digite a quantidade de pontos turisticos da cidade 1: \n");
        scanf("%d", &turistico);
        
    float densidade;
    densidade = (popu/area);
    
    float rpib;
    rpib = (pib/popu);
    
        
    //SEPARAÇÃO    
    
    //aqui definimos o estado da carta, de A até H.
    char estado2[2];
        printf("Digite o Estado da sua Carta 2 de A a H: \n");
        scanf("%s", estado2);
    
    //aqui definimos o código, de 01 a 04.
    char code2[3];
        printf("Agora, digite um código para a carta 2 de 01 a 04: \n");
        scanf("%s", code2);
    
    while ((getchar()) != '\n'); //aqui limpamos os lixos deixados pelo scanf
  
    //aqui definimos a cidade escolhida
    char city2[50];
        printf("Digite o nome da cidade 2: \n");
        fgets(city2, 50, stdin);
        city2[strcspn(city2, "\n")] = 0;
        
    
    //aqui definimos o tamanho da população
    unsigned long int popu2;
        printf("Digite o tamanho da populçao 2: \n");
        scanf("%lu", &popu2);
 
    //aqui definimos a área da cidade
    float area2;
        printf("Digite a area da sua cidade 2: \n");
        scanf("%f", &area2); //lembrar do %2.f para limitar as casas decimais
   
    
    //definindo pib
    float pib2;
        printf("Digite o pib da sua cidade 2: \n");
        scanf("%f", &pib2);

    
    //atribuindo quantidade de pontos turisticos
    int turistico2;
        printf("Digite a quantidade de pontos turisticos da cidade 2: \n");
        scanf("%d", &turistico2);
        
    float densidade2;
    densidade2 = (popu2/area2);
    
    float rpib2;
    rpib2 = (pib2/popu2);

    bool comp;
    comp = densidade < densidade2;

    bool comp2;
    comp2 = densidade2 < densidade;

    unsigned long int total;
    total = (unsigned long int) popu + (int)area + (int)pib + turistico + (int)rpib +comp;

    unsigned long int total2;
    total2 = (unsigned long int) popu2 + (int)area2 + (int)pib2 + turistico2 + (int)rpib2 +comp2;

    bool ganhou;
    ganhou = total > total2;

    bool ganhou2;
    ganhou2 = total2 > total;

        
    printf("\nESPECIFICAÇÕES DA CARTA: %s%s \n", estado, code);
    printf("O nome da cidade é: %s \n", city);
    printf("O tamanho da população é de: %d pessoas \n", popu);
    printf("A area da sua cidade é: %2.f Km² \n", area);
    printf("O PIB da cidade é: %2.f Bilhões \n", pib);
    printf("Número de pontos turísticos: %d \n", turistico);
    printf("Densidade populacional: %.1f \n", densidade);
    printf("PIB per capita: %.1f \n \n", rpib);
    
    printf("ESPECIFICAÇÕES DA CARTA: %s%s \n", estado2, code2);
    printf("O nome da cidade é: %s \n", city2);
    printf("O tamanho da população é de: %d pessoas \n", popu2);
    printf("A area da sua cidade é: %2.f Km² \n", area2);
    printf("O PIB da cidade é: %2.f Bilhões \n", pib2);
    printf("Número de pontos turísticos: %d \n", turistico2);
    printf("Densidade populacional: %.1f \n", densidade2);
    printf("PIB per capita: %.1f \n \n", rpib2);

    printf(" Carta 1: %d \n", ganhou);
    printf(" Carta 2: %d \n", ganhou2);
       
        
    
    return 0;
}
