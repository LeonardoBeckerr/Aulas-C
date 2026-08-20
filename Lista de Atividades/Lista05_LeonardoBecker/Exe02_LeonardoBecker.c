#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int i = 0, alunos_aprovados = 0, alunos_exame = 0, alunos_reprovados = 0;
    float nota1, nota2, media_classe = 0;
    float total_alunos[6], media_aluno[6];

    while(i < 6){

        printf("\n--- Notas do Aluno %d ---\n", i + 1);
        
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1); 
        
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);
        
        total_alunos[i] = nota1 + nota2;
        media_aluno[i] = (nota1 + nota2) / 2.0; 
        media_classe = media_classe + media_aluno[i]; 
        
        if(media_aluno[i] <= 3){
            alunos_reprovados = alunos_reprovados + 1;
            printf("Aluno %d: Reprovado\n", i + 1); 
        }
        else if(media_aluno[i] >= 3 && media_aluno[i] < 7){
            alunos_exame = alunos_exame + 1;
            printf("Aluno %d: Exame\n", i + 1); 
        }
        else{
            alunos_aprovados = alunos_aprovados + 1;
            printf("Aluno %d: Aprovado\n", i + 1); 
        }
        
        i = i + 1;
    }

    media_classe = media_classe / 6;

    printf("\n================ RESUMO DA TURMA ================\n");
    printf("Media geral da classe: %.2f\n", media_classe);
    printf("Total de alunos aprovados: %d\n", alunos_aprovados);
    printf("Total de alunos em exame: %d\n", alunos_exame);
    printf("Total de alunos reprovados: %d\n", alunos_reprovados);
    printf("=================================================\n");

    printf("\n--- Medias Individuais ---\n");
    for(int j = 0; j < 6; j++){
        printf("Aluno %d: Media %.2f (Total de pontos: %.2f)\n", j + 1, media_aluno[j], total_alunos[j]);
    }

    return 0;
}