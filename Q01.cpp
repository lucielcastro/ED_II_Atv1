#include<stdio.h>
#include<math.h>
#include<conio.h>

int main(){

    float m;

    printf("\nInforme um valor em metros: ");
    scanf("%f", &m);

    while (m<0)
    {
       printf("\n\tValor invalido, informe novamente: ");
       scanf("%f", &m);
    }

    float dm = m*10;
    float cm = m*100;
    float mm = m*1000;

    printf("\n\t%.2f m = %.2f dm\n\t%.2f m = %.2f cm\n\t%.2f m = %.2f mm\n",m ,dm ,m ,cm ,m ,mm );

    printf("\nPressione qualquer tecla para finalizar!");
    getch();
}