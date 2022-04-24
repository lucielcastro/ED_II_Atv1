#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string>

typedef struct {
      char nome[50];
      char matricula[20];
      float n1;
      float n2;
      float n3;
} Aluno;

void ImprimePessoa(Aluno P)
{   
    printf("\nNome: %sMatricula: %sNota 01: %.2f\nNota 02: %.2f\nNota 03: %.2f\n",P.nome, P.matricula, P.n1, P.n2, P.n3);
}
void setPessoa(Aluno *p, char Nome[50], char Matricula[20], float N1, float N2, float N3)
{
      p->nome[50] = Nome[50];
      p->matricula[50] = Matricula[50];
      p->n1 = N1;
      p->n2 = N2;
      p->n3 = N3;
}
int main()
{
     Aluno aluno[5];
     int i;
     float somatorio_nota[5] = {0, 0, 0, 0, 0}, media[5], nota1[3], media2[5], maior_media=0.0, menor_media=0.0, maior_nota1 =0.0;
     for(i=0; i<5; i++){
     printf("\nInforme o nome do aluno %d: ", i+1);
     fflush(stdin);
     fgets(aluno[i].nome,50, stdin);

     printf("Informe a matricula do aluno %d: ", i+1);
     fflush(stdin);
     fgets(aluno[i].matricula,20, stdin);

     printf("Informe a primeira nota do aluno %d: ", i+1);
     scanf("%f", &aluno[i].n1);

     printf("Informe a segunda nota do aluno %d: ", i+1);
     scanf("%f", &aluno[i].n2);

     printf("Informe a terceira nota do aluno %d: ", i+1);
     scanf("%f", &aluno[i].n3);
      
      nota1[i] = aluno[i].n1;
     if(nota1[i]>maior_nota1)
      maior_nota1 = nota1[i];
     
      somatorio_nota[i] = somatorio_nota[i] + aluno[i].n1 + aluno[i].n2 + aluno[i].n3;
      media[i]=somatorio_nota[i]/3;

      media2[i] = media[i];

      nota1[i] = aluno[i].n1;

     if(nota1[i]>maior_nota1)
      maior_nota1 = nota1[i];

     if(media[i]>maior_media)
      maior_media = media[i];

      

     }
     
     for(i=0; i<5; i++)
     setPessoa(&aluno[i], aluno[i].nome, aluno[i].matricula, aluno[i].n1, aluno[i].n2, aluno[i].n3);
     
     for(i=0; i<5; i++)
     ImprimePessoa(aluno[i]);
     
     for(i=0; i<5; i++)
     printf("\nSomatorio nota aluno %d: %.2f",i+1, somatorio_nota[i]);
     printf("\n");
     for(i=0; i<5; i++)
     printf("\nMedia aluno %d: %.2f",i+1, media2[i]);
     printf("\n");
     printf("\nmaior nota 1 no geral: %.2f", maior_nota1);
     printf("\nmaior Media no geral: %.2f", maior_media);
     printf("\nmenor Media no geral: %.2f", menor_media);
      for(i=0; i<5; i++){
            if(media[i]>=6)
            printf("\n\nO Aluno %s: esta aprovado com meedia: %.2f!", aluno[i].nome, media[i]);
            else
            printf("\nO Aluno %s: esta reprovado com meedia: %.2f!", aluno[i].nome, media[i]);
      }
     
     
    printf("\nPressione qualquer tecla para finalizar!");
    getch();
}