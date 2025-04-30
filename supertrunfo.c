#include <stdio.h>
int main(){
    printf("Desafio Super Trunfo - Países\n");

    char estado[30];
    char codigo[20];
    char cidade[40];
    int populacao;
    float area;
    float PIB;
    int pontos_turisticos;
    // Cadastro das Cartas:
    printf("Digite o estado: ");
    scanf("%s", estado);
 // O nome do estado deve ser lido com scanf
    // O código do estado deve ser lido com scanf
    printf("Digite o código do estado: ");
    scanf("%s", codigo);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);
    // O nome da cidade deve ser lido com scanf 
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);
    // A população deve ser lida com scanf 
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);
    // A área deve ser lida com scanf 
    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB);
    // O PIB deve ser lido com scanf 
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos);
    // O número de pontos turísticos deve ser lido com scanf
    // Exibição dos dados da carta: 

    
}
    
