#include <stdio.h>

typedef struct {
    int matricula;
    float notas[3];
    float media;
} Ti;

int main() {

    Ti alunos[5];
    int maior_nota = 0;
    float maior_media = 0;
    float menor_media = 10; 


    for (int i = 0; i < 5; i++) {
        printf("Matricula Aluno %d: ", i + 1);
        scanf("%d", &alunos[i].matricula);
        float soma_notas = 0;
        for (int j = 0; j < 3; j++){
            printf("Nota %d: ", j + 1);    
            scanf("%f", &alunos[i].notas[j]);
            soma_notas += alunos[i].notas[j];
        }
        alunos[i].media = soma_notas / 3;

        if (alunos[i].media > maior_media) {
            maior_media = alunos[i].media;
        }

        if (alunos[i].media < menor_media) {
            menor_media = alunos[i].media;
        }
    }

    Ti aluno_maior_media;
    for (int i = 0; i < 5; i++) {
        if (alunos[i].media == maior_media) {
            aluno_maior_media = alunos[i];
        }
    }

    Ti aluno_menor_media;
    for (int i = 0; i < 5; i++) {
        if (alunos[i].media == menor_media) {
            aluno_menor_media = alunos[i];
        }
    }


    printf("Maior media geral: %d", aluno_maior_media.media);
    printf("Menor media geral: %d", aluno_menor_media.media);


    printf("\nSituacao dos alunos:\n");
    for (int i = 0; i < 5; i++) {
        printf("Matricula: %d - ", alunos[i].matricula);
        if (alunos[i].media >= 6.0) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }
    }

}