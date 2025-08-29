#include <stdio.h>

int main() {

    //Variáveis usadas na primeira carta
    char letra;
    char codigo[4], cidade[20];
    int popula, turismo;
    float pib, area;
    float densidade, pibcap;

    //Variáveis usadas na segunda carta
    char letra2;
    char codigo2[4], cidade2[20];
    int popula2, turismo2;
    float pib2, area2;
    float densidade2, pibcap2;

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
    printf("Pontos turisticos: %d\n\n\n\n", turismo2);
    
    return 0;

    //Eu melhorei o ultimo codigo para esse
}
