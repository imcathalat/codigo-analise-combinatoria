#include <stdio.h>
#include <stdlib.h>

int main()
{
    int op, n, p, fatorialn=1, fatorialden=1, arranjo=1, denominador, fatorialp=1;
    printf("Qual opcao voce deseja calcular? (1)Arranjo simples (2)Combinacao Simples(3)Permutacao: ");
    scanf("%d", &op);

    switch(op){
    case 1:

            printf("\nTendo em vista que a formula de arranjo eh A = n!/(n-p)!\nQual numero eh o n da formula? ");
            scanf("%d", &n);
            printf("Qual numero eh o p da formula? ");
            scanf("%d", &p);

            denominador = n-p;

            for(int i = n; i>=1; i--){
                fatorialn = fatorialn * i;
            }

            for (int a = denominador; a >= 1; a--){
                fatorialden = fatorialden * a;
            }

            arranjo = fatorialn/fatorialden;

            printf("Arranjo = %d\n", arranjo);

    break;
    case 2:
            printf("\nTendo em vista que a formula de combinacao eh C = n!/p!(n-p)!\nQual o numero n da formula? ");
            scanf("%d", &n);
            printf("Qual eh o numero p da formula? ");
            scanf("%d", &p);

            for(int i=n; i>=1;i--){
                fatorialn = fatorialn * i;
            }

            for(int a=p; a>=1; a--){
                fatorialp = fatorialp * a;
            }

            int parentese = (n-p);

            for(int b=parentese; b>=1; b--){
                fatorialden = fatorialden * b;
            }

            int combinacao;
            combinacao = fatorialn/(fatorialp*fatorialden);

            printf("\nResultado Combinacao: %d\n", combinacao);

    break;
    case 3:
            printf("\nTendo em vista que a formula de permutacao eh P = n!\nQual eh o numero n da formula? ");
            scanf("%d", &n);

            for(int i=n; i>=1; i--){
                fatorialn = fatorialn * i;
            }

            printf("Permutaco = %d\n", fatorialn);
    break;
    }



    return 0;
}
