/* Name: Nathália Pimentel de Assis
  University: University of Brasilia
  Bachelor student in eletronic engineering course
  Date: June 18th 2019 */
  
  
  #include <stdio.h>
#include <string.h>
#define tam 100

int main(){
double M[12][12];
int linha, i, j;
double med, soma;
i = 0;
j = 0;
med = 0;
soma = 0;
char operacao;
    scanf("%d", &linha);
    scanf(" %c", &operacao);
    for(i = 0; i<12; i++){
        for(j = 0; j<12; j++){
            scanf("%lf", &M[i][j]);
        }
    }

    j=linha;
    for(i=0;i<12;i++)
    {
        soma+=M[j][i];
    }

    if(operacao == 'M'){
        printf("%.1lf\n", soma/12);
    }
    else{
        printf("%.1lf\n", soma);
    }

return 0;
}
