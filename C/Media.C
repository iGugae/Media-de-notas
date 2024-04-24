#include <stdio.h>
int main(void){
    //Variáveis
    char nome[31];
    float n1, n2, n3, media;

    //Entrada de dados
    printf("Informe o nome do aluno(a): ");
    scanf("%s",nome);
    printf("Informe a primeira nota de %s: ",nome);
    scanf("%f",&n1);
    printf("Informe a segunda nota de %s: ",nome);
    scanf("%f",&n2);
    printf("Por fim, informe a ultima nota de %s: ",nome);
    scanf("%f",&n3);

    //Cálculo da média
    media = (n1 + n2 + n3)/3;
    
    //Saída de dados
    printf("O aluno(a) %s possuiu uma media de %.2f",nome,media);
    if (media>=7){
        printf("\nParabens %s!! Ficou acima da media.",nome);
    }
    else
        printf("\nSera necessario realizar a prova de recuperacao, continue estudando!");
}
