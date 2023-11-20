#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];
    double peso, altura, imc;
    int c;



    fputs("===================================================================================", stdout);
    fputs("\nNome do Programa: Calculadora de IMC - Indice de Massa Corporal                   =\n", stdout);
    fputs("Data de Criacao: 27/10/2023                                                       =\n", stdout);
    fputs("Autor: Afonso, Guilherme                                                          =\n", stdout);
    fputs("Curso: Analise e desenvolvimento de sistemas                                      =\n", stdout);
    fputs("Disciplina: CODING: ALGORITMO E ESTRUTURA DE DADOS                                =\n", stdout);
    fputs("Descricao: Este programa calcula o Indice de Massa Corporal [IMC] de um paciente, =\n", stdout);
    fputs("classifica o resultado e exibe as informacoes em um formato facil de entender.    =\n", stdout);
    fputs("===================================================================================", stdout);
    
    while (1) {
        fputs("\nCalculadora de IMC - Indice de Massa Corporal\n", stdout);
        fputs("\nInforme o nome do paciente (ou digite 'sair' para encerrar): ", stdout);
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = '\0';

        if (strcmp(nome, "sair") == 0) {
            fputs("Encerrando o programa...\n", stdout);
            break;
        }

        fputs("Informe o peso (em kg): ", stdout);
        scanf("%lf", &peso);

        fputs("Informe a altura (em metros Ex: 1.8): ", stdout);
        scanf("%lf", &altura);

        system("clear || cls");

        if (peso <= 0 || altura <= 0) {
            fputs("Valores invalidos. O peso e a altura devem ser maiores que zero.\n", stdout);
            continue;
        }

        imc = peso / (altura * altura);
        
        printf("=================================");
        printf("\nRelatorio IMC para %s:\n", nome);
        printf("Peso: %.2lf kg\n", peso);
        printf("Altura: %.2lf m\n", altura);
        printf("IMC: %.2lf\n", imc);
        printf("=================================");

        printf("\nClassificacao IMC:\n");
        printf("Abaixo do peso: Menos de 18.5\n");
        printf("Peso saudavel: 18.5 - 24.9\n");
        printf("Sobrepeso: 25 - 29.9\n");
        printf("Obesidade Grau I: 30 - 34.9\n");
        printf("Obesidade Grau II: 35 - 39.9\n");
        printf("Obesidade Grau III: 40 ou mais\n");

        printf("\nClassificacao: ");
        if (imc < 18.5) {
            printf("Abaixo do peso\n");
        } else if (imc < 25) {
            printf("Peso saudavel\n");
        } else if (imc < 30) {
            printf("Sobrepeso\n");
        } else if (imc < 35) {
            printf("Obesidade Grau I\n");
        } else if (imc < 40) {
            printf("Obesidade Grau II\n");
        } else {
            printf("Obesidade Grau III\n");
        }
        
        while ((c = getchar()) != '\n' && c != EOF); // Limpar o buffer de entrada

    }

    return 0;
}