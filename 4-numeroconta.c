#include <stdio.h>

int numero;
int conta, digitoinformado;
int c1, c2, c3, inverso, soma;
int s0, s1, s2, s3, resultado, digitocalculado;

int main()
{

    // validação da conta
    do
    {
        printf("Digite o numero da conta com 4 digitos: ");
        scanf("%d", &numero);
    } while (numero < 1000 || numero > 9999);

    // separando o digito
    conta = numero / 10;
    digitoinformado = numero % 10;
    // separando numeros da conta
    c1 = conta / 100;
    c2 = (conta / 10) % 10;
    c3 = conta % 10;
    // inverso
    inverso = c3 * 100 + c2 * 10 + c1;
    soma = conta + inverso;
    // separando digito da soma
    s0 = soma / 1000;
    s1 = (soma / 100) % 10;
    s2 = (soma / 10) % 10;
    s3 = soma % 10;
    resultado = s0 * 0 + s1 * 1 + s2 * 2 + s3 * 3;
    digitocalculado = resultado % 10;
    printf("Conta: %d\n", conta);
    printf("Digito informado: %d\n", digitoinformado);
    printf("Digito calculado: %d\n", digitocalculado);
    // verificar se a conta esta correta
    if (digitoinformado == digitocalculado)
    {
        printf("Numero da conta esta correto!");
    }
    else
    {
        printf("Numero da conta esta incorreto");
    }
    return 0;
}