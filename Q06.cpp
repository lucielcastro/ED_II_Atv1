#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string>

typedef struct {
      char nome[50];
      char matricula[20];
      char codigo[20];
      float n1;
      float n2;
} Aluno;

void ImprimePessoa(Aluno P)
{   
    printf("\nNome: %sMatricula: %sCodigo da Disciplina: %s\nNota 01: %.2f\nNota 02: %.2f\n",P.nome, P.matricula,P.codigo, P.n1, P.n2);
}
void setPessoa(Aluno *p, char Nome[50], char Matricula[20], char Codigo[20], float N1, float N2)
{
      p->nome[50] = Nome[50];
      p->matricula[50] = Matricula[50];
      p->codigo[20] = Codigo[20];
      p->n1 = N1;
      p->n2 = N2;
}
int main()
{
     Aluno aluno[10];
     int i;
     float somatorio_nota[10] = {0,0,0,0,0,0, 0, 0, 0, 0}, media[10];
     for(i=0; i<10; i++){
     printf("\nInforme o nome do aluno %d: ", i+1);
     fflush(stdin);
     fgets(aluno[i].nome,50,stdin);

     printf("Informe a matricula do aluno %d: ", i+1);
     fflush(stdin);
     fgets(aluno[i].matricula,20,stdin);

     printf("Informe codigo da disciplina do aluno %d: ", i+1);
     fflush(stdin);
     fgets(aluno[i].codigo,20,stdin);

     printf("Informe a primeira nota do aluno %d: ", i+1);
     scanf("%f", &aluno[i].n1);

     printf("Informe a segunda nota do aluno %d: ", i+1);
     scanf("%f", &aluno[i].n2);
     
      somatorio_nota[i] = somatorio_nota[i] + aluno[i].n1 + aluno[i].n2;
      media[i]=somatorio_nota[i]/2;
      

     }
     
     for(i=0; i<10; i++)
     setPessoa(&aluno[i], aluno[i].nome, aluno[i].matricula, aluno[i].codigo, aluno[i].n1, aluno[i].n2);
     
     for(i=0; i<10; i++)
     ImprimePessoa(aluno[i]);
     
     for(i=0; i<10; i++)
     printf("\nSomatorio nota aluno %d: %.2f",i+1, somatorio_nota[i]);
     printf("\n");
    
      for(i=0; i<10; i++){
            if(media[i]>=6)
            printf("\nCom media: %.2f, o aluno %s: esta aprovado!", media[i], aluno[i].nome);
            else
            printf("\nCom media: %.2f, o aluno %s: esta reprovado!", media[i], aluno[i].nome);
      }
     
     
    printf("\nPressione qualquer tecla para finalizar!");
    getch();
}