#include <calculadora>

int main() {
    int escolha;
    float num1, num2, resultado;
    
    do {
        printf("\nSelecione uma opção:\n");
        printf("1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("0 - Sair\n");
        
        scanf("%d", &escolha);
        
        switch(escolha) {
            case 1:
                printf("Digite o primeiro número: ");
                scanf("%f", &num1);
                
                printf("Digite o segundo número: ");
                scanf("%f", &num2);
                
                resultado = num1 + num2;
                
                printf("O resultado da soma é: %.2f\n", resultado);
                break;
                
            case 2:
                printf("Digite o primeiro número: ");
                scanf("%f", &num1);
                
                printf("Digite o segundo número: ");
                scanf("%f", &num2);
                
                resultado = num1 - num2;
                
                printf("O resultado da subtração é: %.2f\n", resultado);
                break;
                
            case 3:
                printf("Digite o primeiro número: ");
                scanf("%f", &num1);
                
                printf("Digite o segundo número: ");
                scanf("%f", &num2);
                
                resultado = num1 * num2;
                
                printf("O resultado da multiplicação é: %.2f\n", resultado);
                break;
                
            case 4:
                printf("Digite o primeiro número: ");
                scanf("%f", &num1);
                
                printf("Digite o segundo número: ");
                scanf("%f", &num2);
                
                if(num2 == 0) {
                    printf("Não é possível dividir por zero!\n");
                }
                else {
                    resultado = num1 / num2;
                    printf("O resultado da divisão é: %.2f\n", resultado);
                }
                
                break;
                
            case 0:
                printf("Encerrando o programa...\n");
                break;
                
            default:
                printf("Opção inválida!\n");
                break;
        }
    } while(escolha != 0);
    
    return 0;
}
