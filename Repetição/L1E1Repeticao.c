/*
1) Ler um n�mero maior que 2 e imprimir todos os pares entre 2 e o n�mero lido. Imprimir a soma dos pares,
o produto dos �mpares que s�o divis�veis por 9 e a m�dia de todos os n�meros do intervalo.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int i, num, soma=0, somaPar=0, cont=0;
    long long int produtoImp=1;
    float mediaTodos;
    do
    {
        printf("Informe um numero maior que 2: ");
        scanf("%d", &num);
        if(num<=2)
        {
            srand(time(NULL));
            num = rand()%(3-360000);
            printf("\n%d\n", num);
        }
    } while(num<=2);

    for(i=2; i<=num; i++)
    {
        soma = soma + i;
        cont++;
        //cont = cont + 1;
        if(i % 2 == 0)
        {
            printf("%d\t", i);
            somaPar = somaPar + i;
        }
        else
        {
              if(i % 9 == 0)
              {
                  produtoImp = produtoImp * i;
              }
        }
    }

    mediaTodos = (float)soma / cont;
    printf("\nSoma dos pares: %d\n", somaPar);
    printf("Produto dos impares divisiveis por 9: %lld\n", produtoImp);
    printf("Media de todos os numeros: %.2f", mediaTodos);

    return 0;
}
