#include <stdio.h>
#include <math.h>
#include <conio.h>
#include<stdlib.h>

/*Escrever um programa em "C" que solicita as notas das duas provas feitas por cada um dos alunos de uma turma 
(as notas tem de estar no intervalo [0 10]) e imprime para cada um a média das notas. 
O programa deve parar imediatamente após ter sido digitado o valor 50 para a nota da primeira prova.*/

int main()
{
     int Tam_Turma, i;

     printf("\nInforme a quantidade de alunos da turma: ");
     scanf("%d", &Tam_Turma);
     
     float nota1[Tam_Turma], nota2[Tam_Turma], media[Tam_Turma];
     
     for(i=0; i<Tam_Turma; i++){
         printf("\nInforme nota 1 do aluno %d: ", i+1);
         scanf("%f", &nota1[i]);
     
         if(nota1[i] != 50)
         {
             while (nota1[i] < 0 || nota1[i] > 10)
             {
                 printf("\nPrimeira nota inserida do aluno %d eh invalida! informe novamete: ", i+1);
                 scanf("%f",&nota1[i]);
             } 
             printf("\nInforme nota 2 do aluno %d: ", i+1);
             scanf("%f", &nota2[i]);

             while (nota2[i] < 0 || nota2[i] > 10)
             {
                 printf("\nSegunda nota inserida do aluno %d eh invalida! informe novamete: ", i+1);
                 scanf("%f",&nota2[i]);
             }
             media[i] = (nota1[i]+nota2[i])/2;
             printf("\nMedia do aluno %d: %.2f\n", i+1, media[i]);
         }
         if(nota1[i] == 50){
             printf("\nPrograma finalizado!\n"); break;}
     }
     printf("\nPressione qualquer tecla para finalizar!");
     getch();

     return 0;
}
