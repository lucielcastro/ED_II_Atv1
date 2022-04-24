#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string>

typedef struct {
      float x;
      float y;
      float z;
} Vet_R3;

void ImprimePessoa(Vet_R3 P)
{   
    printf("\nX: %.2f\nY: %.2f\nZ: %.2f\n",P.x, P.y, P.z);
}
void setPessoa(Vet_R3 *p, float X, float Y, float Z)
{
      p->x = X;
      p->y = Y;
      p->z = Z;
}
int main()
{
     Vet_R3 vetor[2];
     int i;
     float somatorio_X_vet = 0, somatorio_Y_vet = 0, somatorio_Z_vet = 0;
     for(i=0; i<2; i++){
    
     printf("\nInforme X do vetor %d: ", i+1);
     scanf("%f", &vetor[i].x);

     printf("Informe Y do vetor %d: ", i+1);
     scanf("%f", &vetor[i].y);

     printf("Informe Z do vetor %d: ", i+1);
     scanf("%f", &vetor[i].z);
     
      somatorio_X_vet = somatorio_X_vet + vetor[i].x;
      somatorio_Y_vet = somatorio_Y_vet + vetor[i].y;
      somatorio_Z_vet = somatorio_Z_vet + vetor[i].z;
     }
     
     for(i=0; i<2; i++)
     setPessoa(&vetor[i], vetor[i].x, vetor[i].y, vetor[i].z);
     
     for(i=0; i<2; i++)
     ImprimePessoa(vetor[i]);
     
     printf("\nNovo vetor: X: %.2f Y: %.2f Z %.2f", somatorio_X_vet, somatorio_Y_vet, somatorio_Z_vet);
     printf("\n");
    
     
    printf("\nPressione qualquer tecla para finalizar!");
    getch();
}