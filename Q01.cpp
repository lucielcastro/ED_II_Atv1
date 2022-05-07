#include<stdio.h>
#include<math.h>
#include<conio.h>

/*Fazer um programa em C que pergunta um valor em metros e 
imprime ocorrespondente em decímetros, centímetros e milímetros.*/

int main(){

     float m; //metros

     printf("\nInforme um valor em metros: ");
     scanf("%f", &m);

     while (m<0)
     {
         printf("\n\tValor invalido, informe novamente: ");
         scanf("%f", &m);
     }

     float dm = m*10;//transformando metros em decimetros
     float cm = m*100;//transformando metros em cimetros
     float mm = m*1000;//transformando metros em milimetros

     printf("\n\t%.2f m = %.2f dm\n\t%.2f m = %.2f cm\n\t%.2f m = %.2f mm\n",m ,dm ,m ,cm ,m ,mm );

     printf("\nPressione qualquer tecla para finalizar!");
     getch();

     return 0;
}