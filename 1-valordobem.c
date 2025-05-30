#include <stdio.h>

float valor_bem, valor_depreciado, depreciacao;
float taxa = 0.015;
int ano;

int main()
{
    printf("Informe o valor do bem: \n");
    scanf("%f", &valor_bem);
    printf("Informe o periodo de depreciacao em anos: \n");
    scanf("%d", &ano);
    // calculando depreciacao
    for (int i = 0; i < ano; i++)
    {
        printf("%d\t", i + 1);
        printf("%.2f\t", valor_bem);
        depreciacao = valor_bem * taxa;
        printf("%.2f\t", depreciacao);
        valor_depreciado = valor_bem - depreciacao;
        printf("%.2f\n", valor_depreciado);
        valor_bem = valor_depreciado;
    }

    return 0;
}
