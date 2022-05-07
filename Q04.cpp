#include<stdio.h>
#include<math.h>
#include<conio.h>

/*Fazer um programa em "C" que lê o preço de um produto e inflaciona esse preço em 10% se ele for menor que 100 
e em 20% se ele for maior ou igual a 100.*/

int main(){

     float preco, preco_infla;

     printf("\nInforme o preco do produto: ");
     scanf("%f", &preco);

     while (preco<0)
     {
         printf("\n\tPreco invalido, informe preco novamente: ");
         scanf("%f", &preco);
     }
     if(preco<100) 
     {
         preco_infla = preco*.1+preco;
         printf("\n\tPreco normal R$ %.2f\n\tPreco inflacioado R$ %.2f\n", preco, preco_infla);
     }
     else 
     {
         preco_infla = preco*.2+preco;
         printf("\n\tPreco normal R$ %.2f\n\tPreco inflacioado R$ %.2f\n", preco, preco_infla);
     }

     printf("\nPressione qualquer tecla para finalizar! ");
     getch();

     return 0;
}