#include <stdio.h>
#include <string.h>

// Função para limpar o buffer de entrada (Precisei fazer isto pois o campo 'Código' não funcionava sem essa função para limpar o buffer de entrada)
void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main(){
    char estado1, codigo1[20], cidade1[50], estado2, codigo2[20], cidade2[50];
    unsigned long int populacao1, populacao2; // Alterado para unsigned long int
    int pontost1, pontost2;
    float area1, pib1, area2, pib2, dp1, dp2, ppc1, ppc2;
    float super_poder1, super_poder2; // Variáveis para armazenar o Super Poder

    // Carta 1
    printf("\n**Carta 1**\n");
    
    printf("Estado: ");
    scanf("%c", &estado1);
    limpar_buffer(); // Limpa o buffer após ler o estado
    
    printf("Código: ");
    scanf("%19s", codigo1);
    limpar_buffer(); // Limpa o buffer após ler o código
    
    printf("Nome da Cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0'; // Remove o '\n'
    
    printf("População: ");
    scanf("%lu", &populacao1); // %lu para unsigned long int
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
    scanf("%lu", &populacao2); // %lu para unsigned long int
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
    ppc1 = pib1 / (float)populacao1;
    ppc2 = pib2 / (float)populacao2;

    // Calcular Super Poder
    // Somando população, área, PIB, pontos turísticos, PIB per capita e o inverso da densidade
    super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontost1 + ppc1 + (1.0f/dp1);
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontost2 + ppc2 + (1.0f/dp2);

    // Exibir informações - Carta 1
    printf("\nInformações Digitadas:\n");
    printf("\n**Carta 1**\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontost1);
    printf("Densidade Populacional: %.2f\n", dp1);
    printf("PIB per Capita: %.2f\n", ppc1);
    printf("Super Poder: %.2f\n", super_poder1);

    // Exibir informações - Carta 2
    printf("\n**Carta 2**\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontost2);
    printf("Densidade Populacional: %.2f\n", dp2);
    printf("PIB per Capita: %.2f\n", ppc2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Comparar as cartas
    printf("\nComparação de Cartas:\n");
    
    // População (maior valor vence) (Vou usar ? ao invés de IF)
    printf("População: Carta %d venceu (%d)\n", 
           (populacao1 > populacao2) ? 1 : 2, 
           (populacao1 > populacao2) ? 1 : 0);
    
    // Área (maior valor vence)
    printf("Área: Carta %d venceu (%d)\n", 
           (area1 > area2) ? 1 : 2, 
           (area1 > area2) ? 1 : 0);
    
    // PIB (maior valor vence)
    printf("PIB: Carta %d venceu (%d)\n", 
           (pib1 > pib2) ? 1 : 2, 
           (pib1 > pib2) ? 1 : 0);
    
    // Pontos Turísticos (maior valor vence)
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", 
           (pontost1 > pontost2) ? 1 : 2, 
           (pontost1 > pontost2) ? 1 : 0);
    
    // Densidade Populacional (menor valor vence)
    printf("Densidade Populacional: Carta %d venceu (%d)\n", 
           (dp1 < dp2) ? 1 : 2, 
           (dp1 < dp2) ? 1 : 0);
    
    // PIB per Capita (maior valor vence)
    printf("PIB per Capita: Carta %d venceu (%d)\n", 
           (ppc1 > ppc2) ? 1 : 2, 
           (ppc1 > ppc2) ? 1 : 0);
    
    // Super Poder (maior valor vence)
    printf("Super Poder: Carta %d venceu (%d)\n", 
           (super_poder1 > super_poder2) ? 1 : 2, 
           (super_poder1 > super_poder2) ? 1 : 0);

    return 0;
}