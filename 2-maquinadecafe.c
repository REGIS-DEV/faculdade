#include <stdio.h>

int A1, A2, A3;
int tempo1, tempo2, tempo3, menor;

int main()
{
    // funcionarios por andar
    scanf("%d", &A1);
    scanf("%d", &A2);
    scanf("%d", &A3);
    // calculando tempo
    tempo1 = (A2 * 2) + (A3 * 4);
    tempo2 = (A1 * 2) + (A3 * 2);
    tempo3 = (A1 * 4) + (A2 * 2);

    menor = tempo1;
    // definindo menor tempo
    if (tempo2 < menor)
    {
        menor = tempo2;
    }
    else if (tempo3 < menor)
    {
        menor = tempo3;
    }
    printf("%d\n", menor);

    return 0;
}
