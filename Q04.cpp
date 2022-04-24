#include<stdio.h>
#include<math.h>
#include<conio.h>

int main(){

    float preco, preco_inf ;

    printf("\nInforme o preco do produto: ");
    scanf("%f", &preco);

    while (preco<0)
    {
       printf("\n\tPreco invalido, informe preco novamente: ");
       scanf("%f", &preco);
    }
    if(preco<100) 
    {
       preco_inf = preco*.1+preco;
       printf("\n\tPreco normal R$ %.2f\n\tPreco inflacioando R$ %.2f\n", preco, preco_inf);
    }
    else 
    {
       preco_inf = preco*.2+preco;
       printf("\n\tPreco normal R$ %.2f\n\tPreco inflacioando R$ %.2f\n", preco, preco_inf);
    }

    printf("\nPressione qualquer tecla para finalizar! ");
    getch();
}