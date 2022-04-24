#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
    float nota1, nota2, media;

    printf("\nInforme nota 1: ");
    scanf("%f", &nota1);

    while (nota1 != 50) {
    
    printf("\nInforme nota 2: ");
    scanf("%f", &nota2);

        while ((nota1 < 0 || nota1 > 10) || (nota2 < 0 || nota2 > 10)) {
            printf("\nAlguma nota invalida, iforme as notas novamente: ");
            scanf("%f", &nota1);
            while (nota1 == 50) break;
            scanf("%f", &nota2);
        }
        media = (nota1 + nota2) / 2;
        printf("\nMedia = %.2f", media);
        
        printf("\nInforme as duas notas do outro aluno: ");
        scanf("%f%f", &nota1, &nota2);
    }
    printf("\nPressione qualquer tecla para finalizar!");
    getch();
}