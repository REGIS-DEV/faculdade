#include <stdio.h>

int quantidade, totalitens = 0;
float valorunitario, totalcompras = 0;
char repetir;

int main()
{
    do
    {

        do
        {
            printf("Digite a quantidade do produto (0 ou negativo para parar): ");
            scanf("%d", &quantidade);

            if (quantidade > 0)
            {
                do
                {
                    printf("Digite o valor unitario do produto: ");
                    scanf("%f", &valorunitario);
                    if (valorunitario <= 0)
                    {
                        printf("Valor invalido! Digite novamente.\n");
                    }
                } while (valorunitario <= 0);

                totalcompras += quantidade * valorunitario;
                totalitens += quantidade;
            }
        } while (quantidade > 0);

        if (totalitens == 0)
        {
            printf("Nenhum item comprado.\n");
            return 0;
        }

        // total compra
        printf("\nValor total da compra: R$ %.2f\n", totalcompras);

        // media compra
        float media = totalcompras / totalitens;
        printf("Valor medio dos itens: R$ %.2f\n", media);

        // separar reais centavos
        int reais = (int)totalcompras;
        int centavos = (int)((totalcompras - reais) * 100 + 0.5); // arredondar

        printf("Parte inteira (reais): %d\n", reais);
        printf("Parte fracionaria (centavos): %d\n", centavos);

        // separar em cedulas
        int cedulas100 = reais / 100;
        reais = reais % 100;

        int cedulas50 = reais / 50;
        reais = reais % 50;

        int cedulas20 = reais / 20;
        reais = reais % 20;

        int cedulas10 = reais / 10;
        reais = reais % 10;

        int cedulas5 = reais / 5;
        reais = reais % 5;

        int cedulas2 = reais / 2;
        reais = reais % 2;

        int moedas1 = reais;

        printf("\nCedulas e moedas:\n");
        printf("100: %d\n", cedulas100);
        printf("50: %d\n", cedulas50);
        printf("20: %d\n", cedulas20);
        printf("10: %d\n", cedulas10);
        printf("5: %d\n", cedulas5);
        printf("2: %d\n", cedulas2);
        printf("Moedas de 1 real: %d\n", moedas1);
        printf("\nDeseja repetir este programa S ou N?: ");
        scanf("%s",&repetir);

    } while (repetir == 'S' || repetir == 's');
    printf("Programa encerrado!\n");
    return 0;
}
