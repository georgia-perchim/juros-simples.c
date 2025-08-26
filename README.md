# 📌 Descrição do Projeto: Juros Simples em C
Este projeto foi desenvolvido em linguagem C como parte das atividades da disciplina Algoritmos e Técnicas de Programação.
O objetivo é aplicar conceitos fundamentais da programação, como constantes, variáveis, vetores, matrizes e ponteiros, em um programa prático que simula o cálculo de juros simples.

---

## 🔹 Funcionalidades

- Define uma **constante** representando a taxa de juros anual (5%).  
- Declara variáveis para armazenar:  
  - Valor inicial do investimento  
  - Número de anos  
  - Valor final após aplicação dos juros  
- Solicita ao usuário o valor inicial e o número de anos.  
- Calcula o valor final utilizando a fórmula de juros simples:
    ```c
      Valor Final = Valor Inicial * (1 + (Taxa * Anos))
    ```
- Declara e inicializa:
  - Um vetor de 3 elementos inteiros
  - Uma matriz 2x2 de inteiros
- Utiliza um ponteiro para modificar o primeiro elemento do vetor.
- Exibe na tela:
  - O valor final do investimento
  - Os elementos do vetor e da matriz
  - Os endereços de memória de cada elemento

 ---

 ## Objetivo de Aprendizado:

- Praticar a utilização de constantes e variáveis.

- Compreender o uso de vetores e matrizes.

- Aplicar ponteiros para acesso e modificação de dados.

- Observar a alocação sequencial de memória em arrays.

- Exercitar a lógica de programação através de um exemplo prático.

---

## 🖥️ Exemplo de Execução

```
  Digite o valor inicial do investimento: 1000
  Digite o numero de anos: 3

  Valor final do investimento: 1150.00

  Elementos do vetor: 100, 20, 30
  Elementos da matriz: 1, 2, 3, 4

  Enderecos de memoria do vetor:
  &vetor[0] = 00000086A49FFA0C
  &vetor[1] = 00000086A49FFA10
  &vetor[2] = 00000086A49FFA14

  Enderecos de memoria da matriz:
  &matriz[0][0] = 00000086A49FF9F0
  &matriz[0][1] = 00000086A49FF9F4
  &matriz[1][0] = 00000086A49FF9F8
  &matriz[1][1] = 00000086A49FF9FC
```

---

## 🛠️ Tecnologias Utilizadas

- Linguagem C

- IDE Code::Blocks com compilador GCC/MinGW

---


