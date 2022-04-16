#include<stdio.h>
#include<math.h>
#include<conio.h>

int main(){

    int n1, n2, s, prod_quad, quad;

    printf("\nInforme dois numeros inteiros: ");
    scanf("%d %d", &n1, &n2);

    s = n1+n2; //A soma dos numeros;
    prod_quad = n1 * ( pow(n2, 2)); //O produto do primeiro número pelo quadrado do segundo;
    quad = pow(n1,2); //O quadrado do primeiro número.

    printf("\n\t%d + %d = %d\n\t%d x %d^2 = %d\n\t%d^2 = %d\n",n1 ,n2 ,s ,n1 , n2, prod_quad, n1, quad);

    printf("\nPressione qualquer tecla para finalizar!");
    getch();
}