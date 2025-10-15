/* 
 Projeto: Sistema de Vendas de Bar
 Autor: Júlio Cézar Menezes dos Santos\João Pedro Rodrigues Parpinelli
 Data de criação: 14/10/2025
 Descrição: Cadastro de vendas e cálculo do total do dia.
*/

#include <stdio.h>

int main(void) {
    int opcao, qtd;
    char produto[50];
    float preco, totalDia = 0;

    printf("=== Sistema de Vendas de Bar ===\n");

    do {
        printf("\n1-Cadastrar venda  2-Mostrar total  0-Sair\nEscolha: ");
        scanf("%d", &opcao);

        if(opcao == 1){
            printf("Produto: ");
            scanf(" %[^\n]", produto);
            printf("Quantidade: ");
            scanf("%d", &qtd);
            printf("Preço unitário: ");
            scanf("%f", &preco);

            float valor = qtd * preco;
            totalDia += valor;
            printf("Venda registrada: %d x %s = R$%.2f\n", qtd, produto, valor);
        }
        else if(opcao == 2){
            printf("💰 Total arrecadado no dia: R$%.2f\n", totalDia);
        }
        else if(opcao != 0){
            printf("Opção inválida!\n");
        }

    } while(opcao != 0);

    printf("Encerrando sistema...\n");
    return 0;
}
