#include <stdio.h>
int main(){
 //fase de declaração de variaveis

    //letra do estado
    char estado1, estado2;

    //numero da cidade
    int cidade1, cidade2;

    //nome das cidades
    char n1[40], n2[40];
    
    //area das cidades
    float area1, area2;

    //pib das cidades
    float pib1, pib2;

    //população das cidades
    int pop1, pop2;

    //pontos turisticos das cidades
    int turist1, turist2;

    float dens1, dens2;

    float pibp1, pibp2;



    printf("===Bem-vindo ao Super Trunfo: Paísess===\n");
    printf("\n");
    printf("para começar você deve cadastrar duas cartas");
    printf("\n\n");


    printf("entre com a letra do estado(de A a H): ");
    scanf("%c", &estado1);
    printf(" \n");
    printf("entre com o número da cidade(de 1 a 4)(você pode atécadastrar 4 cidades para 1 estado): ");
    scanf("%d", &cidade1);
    printf("\n");
    printf("entre com o nome da cidade: ");
    scanf("%s", &n1);
    printf("\n");
    printf("entre com a área da cidade(em formato decimal, ex. 3467.53): ");
    scanf("%f", &area1);
    printf("\n");
    printf("entre com o pib da cidade(em formato decimal, ex. 4738.51): ");
    scanf("%f", &pib1);
    printf("\n");
    printf("entre com a população(em formato inteiro, ex. 27318): ");
    scanf("%d", &pop1);
    printf("\n");
    printf("entre com o numero de pontos turisticos(em formato inteiro, ex. 8723): ");
    scanf("%d", &turist1);
    printf("\n");

    printf("vamos cadastrar a segunda carta\n");

    printf("entre com a letra do estado (de A a H): ");
    scanf(" %c", &estado2);
    printf("\n");
    printf("entre com o número da cidade(de 1 a 4)(você pode atécadastrar 4 cidades para 1 estado): ");
    scanf("%d", &cidade2);
    printf("\n");
    printf("entre com o nome da cidade: ");
    scanf(" %s", &n2);
    printf("\n");
    printf("entre com a área da cidade(em formato decimal, ex. 3467.53): ");
    scanf("%f", &area2);
    printf("\n");
    printf("entre com o pib da cidade(em formato decimal, ex. 4738.51): ");
    scanf("%f", &pib2);
    printf("\n");
    printf("entre com a população(em formato inteiro, ex. 27318): ");
    scanf("%d", &pop2);
    printf("\n");
    printf("entre com o numero de pontos turisticos(em formato inteiro, ex. 8723): ");
    scanf("%d", &turist2);
    printf("\n");

    dens1 = pop1 / area1;
    dens2 = pop2 / area2;

    pibp1 = pib1 / pop1;
    pibp2 = pib2 / pop2;

    float poder1 = pop1 + area1 + pib1 + turist1 + pibp1 - dens1;
    float poder2 = pop2 + area2 + pib2 + turist2 + pibp2 - dens2;


    printf("=====as cartas são:===== \n");

    printf("codigo da carta(letra do estado+número da carta): %c%d\n", estado1, cidade1);
    printf("cidade de: %s\n", n1);
    printf("população: %d de habitantes\n", pop1);
    printf("area da cidade: %.2f km\n", area1);
    printf("pib da cidade : %.2f de reais\n", pib1);
    printf("densidade populacional: %.2f hab/km2\n", dens1);
    printf("pib per capita: %.2f reais\n", pibp1);
    printf("numero de pontos turisticos: %d\n", turist1);
    printf("poder da carta: %.3f \n\n\n", poder1);

    printf("codigo da carta(letra do estado+número da carta): %c%d\n", estado2, cidade2);
    printf("cidade de: %s\n", n2);
    printf("população: %d de habitantes\n", pop2);
    printf("area da cidade: %.2f km\n", area2);
    printf("pib da cidade : %.2f de reais\n", pib2);
    printf("densidade populacional: %.2f hab/km2\n", dens2);
    printf("pib per capita: %.2f reais\n", pibp2);
    printf("numero de pontos turisticos: %d\n", turist2);
    printf("poder: %.3f\n", poder2);

    printf("resultados a baixo:\n");

    if(pop1 > pop2){
        printf("populacao: carta 1 venceu(1)\n");
    }else{
        printf("populacao: carta 2 venceu(0)\n");
    }
    if(area1 > area2){
        printf("area: carta 1 ganhou(1)\n");
    }else{
        printf("area: carta 2 venceu(0)\n");
    }
    if(pib1 > pib2){
        printf("pib: carta 1 venceu(1)\n");
    }else{
        printf("pib: carta 2 venceu(0)\n");
    }
    if(turist1 > turist2){
        printf("pontos turisticos: carta 1 venceu(1)\n");
    }else{
        printf("pontos turisticos: carta 2 venceu(0)\n");
    }
    if(dens1 > dens2){
        printf("densidade populacional: carta 1 venceu(1)\n");
    }else{
        printf("densidade populacional: carta 2 venceu(0)\n");
    }
    if(pibp1 > pibp2){
        printf("pib per capita: carta 1 venceu(1)\n");
    }else{
        printf("pib per capita: carta 2 venceu(0)\n");
    }
    if(poder1 > poder2){
        printf("poder: carta 1 venceu(1)\n");
    }else{
        printf("poder: carta 2 venceu(0)\n");
    }


    return 0;


}