#include <stdio.h>
#include <string.h>

// 1. Definição da constante (taxa de juros anual = 5%)
#define TAXA_JUROS_ANUAL 0.05

int main() {
    // 2. Variáveis do investimento
    float valor_inicial, valor_final;
    int anos;

    // 6. Vetor de 3 elementos e matriz 2x2
    int vetor[3] = {10, 20, 30};
    int matriz[2][2] = {{1, 2}, {3, 4}};

    // 3. Entrada de dados do usuário
    printf("Digite o valor inicial do investimento: ");
    scanf("%f", &valor_inicial);

    printf("Digite o numero de anos: ");
    scanf("%d", &anos);

    // 4. Cálculo do valor final (juros simples)
    valor_final = valor_inicial * (1 + (TAXA_JUROS_ANUAL * anos));

    // 5. Exibição do valor final
    printf("\nValor final do investimento: %.2f\n", valor_final);

    // 7. Ponteiro para modificar o primeiro elemento do vetor
    int *ptr_vetor = &vetor[0];
    *ptr_vetor = 100; // altera o primeiro elemento para 100

    // 8. Exibição dos valores do vetor e da matriz
    printf("\nElementos do vetor: %d, %d, %d\n",
           vetor[0], vetor[1], vetor[2]);

    printf("Elementos da matriz: %d, %d, %d, %d\n",
           matriz[0][0], matriz[0][1], matriz[1][0], matriz[1][1]);

    // 8. Exibição dos endereços de memória
    printf("\nEnderecos de memoria do vetor:\n");
    printf("&vetor[0] = %p\n", (void*)&vetor[0]);
    printf("&vetor[1] = %p\n", (void*)&vetor[1]);
    printf("&vetor[2] = %p\n", (void*)&vetor[2]);

    printf("\nEnderecos de memoria da matriz:\n");
    printf("&matriz[0][0] = %p\n", (void*)&matriz[0][0]);
    printf("&matriz[0][1] = %p\n", (void*)&matriz[0][1]);
    printf("&matriz[1][0] = %p\n", (void*)&matriz[1][0]);
    printf("&matriz[1][1] = %p\n", (void*)&matriz[1][1]);

    return 0;
};
