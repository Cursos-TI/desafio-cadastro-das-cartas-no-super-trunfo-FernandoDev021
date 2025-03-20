#include <stdio.h>
int main(){
 //fase de declaração de variaveis

    //letra do estado
    char estado1, estado2, estado3, estado4, estado5, estado6, estado7, estado8;
    char estado9, estado10, estado11, estado12, estado13, estado14, estado15, estado16;

    //numero da cidade
    int cidade1, cidade2, cidade3, cidade4;
    int cidade5, cidade6, cidade7, cidade8;
    int cidade9, cidade10, cidade11, cidade12;
    int cidade13, cidade14, cidade15, cidade16;
    int cidade17, cidade18, cidade19, cidade20;
    int cidade21, cidade22, cidade23, cidade24;
    int cidade35, cidade26, cidade27, cidade28;
    int cidade29, cidade30, cidade31, cidade32;

    //nome das cidades
    char n1[40], n2[40], n3[40], n4[30], n5[40], n6[40], n7[40], n8[40];
    char n9[40], n10[40], n11[40], n12[30], n13[40], n14[40], n15[40], n16[40];
    char n17[40], n18[40], n19[40], n20[30], n21[40], n22[40], n23[40], n24[40];
    char n25[40], n26[40], n27[40], n28[30], n29[40], n30[40], n31[40], n32[40];
    
    //area das cidades
    float area1, area2, area3, area4, area5, area6, area7, area8;
    float area9, area10, area11, area12, area13, area14, area15, area16;
    float area17, area18, area19, area20, area21, area22, area23, area24;
    float area25, area26, area27, area28, area29, area30, area31, area32;

    //pib das cidades
    float pib1, pib2, pib3, pib4, pib5, pib6, pib7, pib8;
    float pib9, pib10, pib11, pib12, pib13, pib14, pib15, pib16;
    float pib17, pib18, pib19, pib20, pib21, pib22, pib23, pib24;
    float pib25, pib26, pib27, pib28, pib29, pib30, pib31, pib32;

    //população das cidades
    int pop1, pop2, pop3, pop4, pop5, pop6, pop7, pop8;
    int pop9, pop10, pop11, pop12, pop13, pop14, pop15, pop16;
    int pop17, pop18, pop19, pop20, pop21, pop22, pop23, pop24;
    int popG025, pop26, pop27, pop28, pop29, pop30, pop31, pop32;

    //pontos turisticos das cidades
    int turist1, turist2, turist3, turist4, turist5, turist6;
    int turist7, turist8, turist9, turist10, turist11, turist12;
    int turist13, turist14, turist15, turist16, turist17, turist18;
    int turist19, turist20, turist21, turist22, turist23, turist24;
    int turist25, turist26, turist27, turist28, turist29, turist30;
    int turist31, turist32;

    char opcao;
    char menu;

    printf("===Bem-vindo ao Super Trunfo: Paísess===\n");
    printf("\n");
    printf("você deve cadastrar oito estados, para cada estado, \n");
    printf("você irá cadastrar quatro cartas, cada uma representando\n");
    printf("uma cidade diferente daquele estado.\n");
    printf("cada estado será denominado por uma letra, de A a H, \n");
    printf("para facilitar o entendimento.\n");
    printf("as cidades tambem serão identificadas por numeros, de 1 a 4");
    printf("\n");
    printf("*****você precisa cadastrar pelo menos duas cartas para começar*****\n");
    printf("\n");

    printf("entre com os dados da carta\n");
    printf("entre com a letra do estado dessa carta: ");
    scanf("%c", &opcao);
    switch(opcao){
        case 'a':
        estado1 = 'a';
        printf("entre com o número da cidade: ");
        scanf("%d", &cidade1);
        printf("entre com o nome da cidade: ");
        scanf(" %s", &n1);
        printf("entre com a quantidade da habtantes(em formato inteiro): ");
        scanf("%d", &pop1);
        printf("entre com a area da cidade(em formato decimal, ex. 241.54): ");
        scanf("%f", &area1);
        printf("entre com o pib(em formato decimal, ex. 3415.98): ");
        scanf("%f", &pib1);
        printf("entre com o numero de pontos turisticos(em formato inteiro): ");
        scanf("%d", &turist1);
        break;
        case 'b':
        estado1 = 'b';
        printf("entre com o número da cidade: ");
        scanf("%d", &cidade1);
        printf("entre com o nome da cidade: ");
        scanf(" %s", &n1);
        printf("entre com a quantidade da habtantes(em formato inteiro): ");
        scanf("%d", &pop1);
        printf("entre com a area da cidade(em formato decimal, ex. 241.54): ");
        scanf("%f", &area1);
        printf("entre com o pib(em formato decimal, ex. 3415.98): ");
        scanf("%f", &pib1);
        printf("entre com o numero de pontos turisticos(em formato inteiro): ");
        scanf("%d", &turist1);
        break;
        case 'c':
        estado1 = 'c';
        printf("entre com o número da cidade: ");
        scanf("%d", &cidade1);
        printf("entre com o nome da cidade: ");
        scanf(" %s", &n1);
        printf("entre com a quantidade da habtantes(em formato inteiro): ");
        scanf("%d", &pop1);
        printf("entre com a area da cidade(em formato decimal, ex. 241.54): ");
        scanf("%f", &area1);
        printf("entre com o pib(em formato decimal, ex. 3415.98): ");
        scanf("%f", &pib1);
        printf("entre com o numero de pontos turisticos(em formato inteiro): ");
        scanf("%d", &turist1);
        break;
        case 'd':
        estado1 = 'd';
        printf("entre com o número da cidade: ");
        scanf("%d", &cidade1);
        printf("entre com o nome da cidade: ");
        scanf(" %s", &n1);
        printf("entre com a quantidade da habtantes(em formato inteiro): ");
        scanf("%d", &pop1);
        printf("entre com a area da cidade(em formato decimal, ex. 241.54): ");
        scanf("%f", &area1);
        printf("entre com o pib(em formato decimal, ex. 3415.98): ");
        scanf("%f", &pib1);
        printf("entre com o numero de pontos turisticos(em formato inteiro): ");
        scanf("%d", &turist1);
        break;
        case 'e':
        estado1 = 'e';
        printf("entre com o número da cidade: ");
        scanf("%d", &cidade1);
        printf("entre com o nome da cidade: ");
        scanf(" %s", &n1);
        printf("entre com a quantidade da habtantes(em formato inteiro): ");
        scanf("%d", &pop1);
        printf("entre com a area da cidade(em formato decimal, ex. 241.54): ");
        scanf("%f", &area1);
        printf("entre com o pib(em formato decimal, ex. 3415.98): ");
        scanf("%f", &pib1);
        printf("entre com o numero de pontos turisticos(em formato inteiro): ");
        scanf("%d", &turist1);
        break;
        case 'f':
        estado1 = 'f';
        printf("entre com o número da cidade: ");
        scanf("%d", &cidade1);
        printf("entre com o nome da cidade: ");
        scanf(" %s", &n1);
        printf("entre com a quantidade da habtantes(em formato inteiro): ");
        scanf("%d", &pop1);
        printf("entre com a area da cidade(em formato decimal, ex. 241.54): ");
        scanf("%f", &area1);
        printf("entre com o pib(em formato decimal, ex. 3415.98): ");
        scanf("%f", &pib1);
        printf("entre com o numero de pontos turisticos(em formato inteiro): ");
        scanf("%d", &turist1);
        break;
        case 'g':
        estado1 = 'g';
        printf("entre com o número da cidade: ");
        scanf("%d", &cidade1);
        printf("entre com o nome da cidade: ");
        scanf(" %s", &n1);
        printf("entre com a quantidade da habtantes(em formato inteiro): ");
        scanf("%d", &pop1);
        printf("entre com a area da cidade(em formato decimal, ex. 241.54): ");
        scanf("%f", &area1);
        printf("entre com o pib(em formato decimal, ex. 3415.98): ");
        scanf("%f", &pib1);
        printf("entre com o numero de pontos turisticos(em formato inteiro): ");
        scanf("%d", &turist1);
        break;
        case 'h':
        estado1 = 'h';
        printf("entre com o número da cidade: ");
        scanf("%d", &cidade1);
        printf("entre com o nome da cidade: ");
        scanf(" %s", &n1);
        printf("entre com a quantidade da habtantes(em formato inteiro): ");
        scanf("%d", &pop1);
        printf("entre com a area da cidade(em formato decimal, ex. 241.54): ");
        scanf("%f", &area1);
        printf("entre com o pib(em formato decimal, ex. 3415.98): ");
        scanf("%f", &pib1);
        printf("entre com o numero de pontos turisticos(em formato inteiro): ");
        scanf("%d", &turist1);
        break;


    }//fim do switch




    

    //testes
    printf("%c %d", estado1, cidade1);
    printf("%s", n1);
    printf("%.2f", pib1);
    printf("%.2f", area1);
    printf("%d", pop1);
    printf("%d", turist1);
    return 0;


}