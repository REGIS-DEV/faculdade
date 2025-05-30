#include <stdio.h>

int N;

int main() {
    scanf("%d", &N);

    int carneiros[N];
    int atacadas[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &carneiros[i]);
        atacadas[i] = 0; // 0 = não atacada, 1 = atacada
    }

    int pos = 0;

    while (pos >= 0 && pos < N) {
        if (carneiros[pos] > 0) {   // só rouba se tiver carneiros
            carneiros[pos]--;
            atacadas[pos] = 1;
        }

        // Se o número antes de roubar era ímpar, vai pra frente
        if ((carneiros[pos] + 1) % 2 == 1) {  // +1 porque ele já roubou
            pos++;
        } else {
            pos--;
        }
    }

    int total_atacadas = 0, total_restantes = 0;

    for (int i = 0; i < N; i++) {
        if (atacadas[i])
            total_atacadas++;
        total_restantes += carneiros[i];
    }

    printf("%d %d\n", total_atacadas, total_restantes);

    return 0;
}
