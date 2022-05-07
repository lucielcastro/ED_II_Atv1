#include<stdio.h>
#include<math.h>
#include<conio.h>

/*Faça um programa em "C" que lê dois valores e imprime: 
- se o primeiro valor for menor que o segundo, a lista de valores do primeiro até o segundo; 
- se o primeiro valor for maior que o segundo a lista de valores do primeiro até o segundo em ordem decrescente; 
- se ambos forem iguais a mensagem "valores iguais".*/

int main(){

     int n1, n2;

     printf("\nInforme dois numeros inteiros: ");
     scanf("%d %d", &n1, &n2);
    
     printf("\n");
    
     if(n1<n2) 
     {
         for(int i = n1; i<=n2; i++)
         printf("%d ", i);
     }
     else if(n1>n2) 
     {
         for(int i = n1; i>=n2; i--)
         printf("%d ", i);
     }
     else printf("\n\tNumeros iguais\n");

     printf("\n\nPressione qualquer tecla para finalizar!");
     getch();

     return 0;
}