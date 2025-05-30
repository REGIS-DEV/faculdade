#include <stdio.h>
// N numero de competidores
// K quantidade minima de classificados
int N, K;

int main()
{

    scanf("%d", &N);
    scanf("%d", &K);

    int pontuacoes[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &pontuacoes[i]);
    }
    // ordenando em forma decrescente
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            if (pontuacoes[j] < pontuacoes[j + 1])
            {
                int temp = pontuacoes[j];
                pontuacoes[j] = pontuacoes[j + 1];
                pontuacoes[j + 1] = temp;
            }
        }
    }
    // definindo nota de corte
    int corte = pontuacoes[K - 1];
    int classificados = 0;
    for (int i = 0; i < N; i++)
    {
        if (pontuacoes[i] >= corte)
        {
            classificados++;
        }
        else
        {
            break;
        }
    }
    printf("\n%d", classificados);

    return 0;
}
