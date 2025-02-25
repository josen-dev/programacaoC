#include <stdio.h>
#include <string.h>

int main(){
char estado1, codigo1[20], cidade1[50], estado2, codigo2[20], cidade2[50]; // Use arrays for strings
int populacao1, pontost1, populacao2, pontost2;
float area1, pib1, area2, pib2;

// Carta 1
printf("\n"); // Skip a line at the beggining
printf("Carta 1: \n");
printf("Estado: %c");
scanf(" %c", &estado1); // Add space before %c to consume newline

printf("Código: %s");
scanf("%19s", codigo1); // %19x Limit input size
getchar(); //limpar antes de usar fgets

printf("Nome da Cidade: ");
//scanf("%49s", cidade1); // Limit input size
fgets(cidade1, sizeof(cidade1), stdin);
cidade1[strcspn(cidade1, "\n")] = '\0'; // Remove o '\n'

printf("População: ");
scanf("%d", &populacao1);

printf("Área: ");
scanf("%f", &area1);

printf("PIB: ");
scanf("%f", &pib1);

printf("Número de Pontos Turísticos: ");
scanf("%d", &pontost1);

// Carta 2
printf("\n"); // Skip a line at the beggining of the 2nd card
printf("Carta 2: \n");
printf("Estado: %c");
scanf(" %c", &estado2); // Add space before %c to consume newline

printf("Código: %s");
scanf("%19s", codigo2); // %19x Limit input size
getchar(); //limpar antes de usar fgets


printf("Nome da Cidade: ");
//scanf("%49s", cidade2); // Limit input size
fgets(cidade2, sizeof(cidade2), stdin);
cidade2[strcspn(cidade2, "\n")] = '\0'; // Remove o '\n'

printf("População: ");
scanf("%d", &populacao2);

printf("Área: ");
scanf("%f", &area2);

printf("PIB: ");
scanf("%f", &pib2);

printf("Número de Pontos Turísticos: ");
scanf("%d", &pontost2);

printf("\nInformações Digitadas:\n"); // carta 1
printf("Estado:%c", estado1);
printf("\nCódigo:%s\n", codigo1);
printf("Nome da Cidade:%s\n", cidade1);
printf("População:%d\n", populacao1);
printf("Área:%.2f\n", area1);
printf("PIB:%.2f\n", pib1);
printf("Número de Pontos Turísticos:%d\n", pontost1);

printf("\nCarta 2:\n"); // carta 2
printf("Estado:%c\n", estado2);
printf("Código:%s\n", codigo2);
printf("Nome da Cidade:%s\n", cidade2);
printf("População:%d\n", populacao2);
printf("Área:%.2f\n", area2);
printf("PIB:%.2f\n", pib2);
printf("Número de Pontos Turísticos:%d\n", pontost2);

return 0;

}
