#include <stdio.h>

int main() {

    //Variáveis usadas na primeira carta
    char letra;
    char codigo[4], cidade[20];
    int popula, turismo;
    float pib, area;
    float densidade, pibcap;
    float superpoder1;
    int pontos = 0;

    //Variáveis usadas na segunda carta
    char letra2;
    char codigo2[4], cidade2[20];
    int popula2, turismo2;
    float pib2, area2;
    float densidade2, pibcap2;
    float superpoder2;
    int pontos2 = 0;

    // Perguntas/scans da primeira carta
    printf("\n\n\nOla, bem vindo ao super trunfo!\nDigite as informacoes da primeira carta:\n");
    
    printf("Qual o codigo da carta? (Ex.: A01)\n");
    scanf("%3s", codigo);

    printf("Qual o estado da carta de A a H:\n");
    scanf(" %c", &letra);

    printf("Qual o nome da cidade (sem usar espaco)?\n");
    scanf("%19s", cidade);

    printf("Qual a populacao dessa cidade?\n");
    scanf("%d", &popula);

    printf("Qual a area dessa cidade?\n");
    scanf("%f", &area);

    printf("Qual o PIB dessa cidade?\n");
    scanf("%f", &pib);

    printf("Quantos pontos turisticos tem essa cidade?\n");
    scanf("%d", &turismo);
    
    // Perguntas/scans da segunda carta
    printf("\n\nQual o codigo da segunda carta? (Ex.: A01)\n");
    scanf("%3s", codigo2);

    printf("Qual o estado da carta de A a H:\n");
    scanf(" %c", &letra2);

    printf("Qual o nome da segunda cidade (sem usar espaco)?\n");
    scanf("%19s", cidade2);

    printf("Qual a populacao dessa outra cidade?\n");
    scanf("%d", &popula2);

    printf("Qual a area dessa outra cidade?\n");
    scanf("%f", &area2);

    printf("Qual o PIB dessa cidade?\n");
    scanf("%f", &pib2);

    printf("Quantos pontos turisticos tem essa cidade?\n");
    scanf("%d", &turismo2);
    
    densidade = popula / area;
    pibcap = pib / popula;

    densidade2 = popula2 / area2;
    pibcap2 = pib2 / popula2;

    //Impressões da primeira carta
    printf("\n\n\nPrimeira carta:\n");
    printf("Estado: %c\n", letra);
    printf("Codigo: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("Populacao: %d\n", popula);
    printf("Area da cidade: %.2f\n", area);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB: %.2f\n", pib);
    printf("PIB por capita: %.2f\n", pibcap);
    printf("Pontos turisticos: %d\n", turismo);

    //Impressões da segunda carta
    printf("\n\nSegunda carta:\n");
    printf("Estado: %c\n", letra2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Populacao: %d\n", popula2);
    printf("Area da cidade: %.2f\n", area2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB: %.2f\n", pib2);
    printf("PIB por capita: %.2f\n", pibcap2);
    printf("Pontos turisticos: %d\n\n", turismo2);
    
    

    //A partir daqui será utilizado o conhecimento do nível mestre para poder comparar cada valor:
    

    /*Eu fiz a comparação na prórpia impressão pra não precisar fazer uma variável para cada característica
    de cada cidade, a única variável que precisarei usar a mais será a de supeor poder, justamente
    pra linha de código de printf n ficar maior que ela deveria ser!*/

    superpoder1 = (float) popula + (float) turismo + pib + area + densidade + pibcap;
    superpoder2 = (float) popula2 + (float) turismo2 + pib2 + area2 + densidade2 + pibcap2;

    printf("Batalha de cartas (Considere 0 para falso e 1 para verdadeiro):\n\n");
    printf("A carta de código %s possui maior População que a carta de codigo %s? %d\n", codigo, codigo2, popula > popula2);
    printf("A carta de código %s possui maior Área que a carta de codigo %s? %d\n", codigo, codigo2, area > area2);
    printf("A carta de código %s possui maior PIB que a carta de codigo %s? %d\n", codigo, codigo2, pib > pib2);
    printf("A carta de código %s possui maior Pontos Turísticos que a carta de codigo %s? %d\n", codigo, codigo2, turismo > turismo2);
    printf("A carta de código %s possui melhor Densidade Populacional que a carta de codigo %s? %d\n", codigo, codigo2, densidade < densidade2);
    printf("A carta de código %s possui maior PIB per Capita que a carta de codigo %s? %d\n\n", codigo, codigo2, pibcap > pibcap2);
    printf("Para finalizar a batalha, vamos comparar os Super Poder delas, que consiste na soma de todos as Características\n");

    //Aqui vou colocar uma impressão do Super Poder de cada carta pra termos essa comparação visual!
    printf("Super Poder da primeira carta: %.2f\n", superpoder1);
    printf("Super Poder da segunda carta: %.2f\n\n", superpoder2);
    
    //A partir daqui será usado os conhecimentos de estruturas de decisões:
    printf("Comparação de cartas:\n\n");
    printf("Atributo população: \nCarta 1: %d VS %d Carta 2\n\n", popula, popula2);
    printf("Super Poder (todos os atributos):\nCarta 1 %.2f VS %.2f Carta 2\n\n", superpoder1, superpoder2);
    printf("Atributo PIB: \nCarta 1: %.2f VS %.2f Carta 2\n\n", pib, pib2);

    //Aqui será usado a estrutura IF e ELSE!
    if ( popula > popula2 )
    {
        printf("A primeira carta venceu em população!!!\n");
        pontos++;
    } else
    {
        printf("A segunda carta venceu em população!!!\n");

        pontos2++;
    }

    if ( pib > pib2 )
    {
        printf("A primeira carta venceu em PIB!!!\n");
        pontos++;
    } else
    {
        printf("A segunda carta venceu em PIB!!!\n");
        pontos2++;
    }

    if ( superpoder1 > superpoder2 )
    {
        printf("A primeira carta venceu em Super Poder!!!\n");
        pontos++;
    } else
    {
        printf("A segunda carta venceu em Super Poder!!!\n");
        pontos2++;
    }

    /*Aqui vou implementra uma questão de desempate entre as duas cartas utilizando os pontuadores que 
    coloquei enquanto o programa verificava se as variáveis eram verdadeiras ou falsas*/

    if (pontos > pontos2)
    {
        printf("\nParabéns, a cidade %s venceu!", cidade);
    } else 
    { 
        printf("\nParabéns, a cidade %s venceu!", cidade2);
    }

return 0;   
}
