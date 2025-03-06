#include <stdio.h>
#include <string.h>

// Função para limpar o buffer de entrada (Precisei fazer isto pois o campo 'Código' não funcionava sem essa função para limpar o buffer de entrada)
void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main(){
    char estado1, codigo1[20], cidade1[50], estado2, codigo2[20], cidade2[50];
    int populacao1, pontost1, populacao2, pontost2;
    float area1, pib1, area2, pib2, dp1, dp2, ppc1, ppc2;

    // Carta 1
    printf("\n**Carta 1**\n");
    
    printf("Estado: ");
    scanf("%c", &estado1);
    limpar_buffer(); // Limpa o buffer após ler o estado
    
    printf("Código: ");
    scanf("%19s", codigo1);
    limpar_buffer(); // Limpa o buffer após ler o código (Específicamente esse campo não funcionava sem essa função para limpar o buffer de entrada)
    
    printf("Nome da Cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0'; // Remove o '\n'
    
    printf("População: ");
    scanf("%d", &populacao1);
    limpar_buffer();
    
    printf("Área: ");
    scanf("%f", &area1);
    limpar_buffer();
    
    printf("PIB: ");
    scanf("%f", &pib1);
    limpar_buffer();
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontost1);
    limpar_buffer();

    // Carta 2
    printf("\n**Carta 2**\n");
    
    printf("Estado: ");
    scanf("%c", &estado2);
    limpar_buffer();
    
    printf("Código: ");
    scanf("%19s", codigo2);
    limpar_buffer();
    
    printf("Nome da Cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';
    
    printf("População: ");
    scanf("%d", &populacao2);
    limpar_buffer();
    
    printf("Área: ");
    scanf("%f", &area2);
    limpar_buffer();
    
    printf("PIB: ");
    scanf("%f", &pib2);
    limpar_buffer();
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontost2);
    limpar_buffer();

    // Calcular Densidade e PIB per capita
    dp1 = (float)populacao1 / area1;
    dp2 = (float)populacao2 / area2;
    ppc1 = pib1 / populacao1;
    ppc2 = pib2 / populacao2;

    // Exibir informações - Carta 1
    printf("\nInformações Digitadas:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontost1);
    printf("Densidade Populacional: %.2f\n", dp1);
    printf("PIB per Capita: %.2f\n", ppc1);

    // Exibir informações - Carta 2
    printf("\n**Carta 2**\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontost2);
    printf("Densidade Populacional: %.2f\n", dp2);
    printf("PIB per Capita: %.2f\n", ppc2);

    return 0;
}