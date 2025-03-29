#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

        int populacaoA, populacaoB, pontos_turisticos;
        float area, pib;
        char cidade[20];

         //Usuário 01 irá digitar a cidade.
         printf("Digite a cidade Carta 01: ");
         scanf("%s", &cidade);
         printf("cidade: %s\n", cidade);

    
         //Usuário 01 irá digitar a população.
         printf("Digite o número da População Carta 01: ");
         scanf("%d", &populacaoA);
         printf("População: %d\n", populacaoA);
    
         // Usuário 01 irá digitar a área total da cidade.
         printf("Digite a área total da cidade Carta 01:");
         scanf("%f", &area);
         printf("Área: %f\n", area);
    
         // Usuário 01 irá digitar o PIB.
         printf("Digite o PIB da cidade Carta 01:");
         scanf("%e", &pib);
         printf("PIB: %e\n", pib);
    
         // usuário 01 irá digitar os pontos turisticos.
         printf("Digite a quatindade de pontos turísticos Carta 01:");
         scanf("%d", &pontos_turisticos);
         printf("Pontos Turísticos: %d\n", pontos_turisticos);
    
             //Começará o usuário 02
             
             //Usuário 02 irá digitar a cidade.
             printf("Digite a cidade Carta 02: ");
             scanf("%s", &cidade);
             printf("cidada: %s\n", cidade);

             //Usuário 02 irá digitar a população.
             printf("Digite o número da População Carta 02: ");
             scanf("%d", &populacaoB);
             printf("População: %d\n", populacaoB);
    
             // Usuário 02 irá digitar a área total da cidade.
             printf("Digite a área total da cidade Carta 02:");
             scanf("%f", &area);
             printf("Área: %f\n", area);
    
             // Usuário 02 irá digitar o PIB.
             printf("Digite o PIB da cidade Carta 02:");
             scanf("%e", &pib);
             printf("PIB: %e\n", pib);
    
             // usuário 02 irá digitar os pontos turisticos.
             printf("Digite a quatindade de pontos turísticos Carta 02:");
             scanf("%d", &pontos_turisticos);
             printf("Pontos Turísticos: %d\n", pontos_turisticos);

             if(populacaoA > populacaoB){
                printf("A cidade 01 tem maior população. É a vencdora\n");
             }
            else {
               printf("A cidade 02 tem maior população. É a vencedora\n");
                }
            
    return 0;
        }
