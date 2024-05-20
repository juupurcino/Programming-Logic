#include <stdio.h>
#include <stdlib.h>

typedef struct {
    
    char rua[50];
    char num_casa;
    char complemento[20];
    char bairro[20];
    char cep;
    char cidade[15];
    char estado[20];
    char pais[20];

}Endereco;

typedef struct {
    
    char ddd;
    char num_tel;

}Telefone;

typedef struct {
    
    int dia;
    int mes;
    int ano;

}Data;

typedef struct {
    
    char nome[50];
    char email[30];
    Endereco endereco;
    Telefone telefone;
    Data data_nascimento;
    char observacao[100];

} Pessoa;


int main(){

    int choice = 1;
    int user = 0;
    int numPessoas = 0;
    
    Pessoa *pessoas = NULL;

    do
    {   numPessoas ++;
        pessoas = (Pessoa*)realloc(pessoas, numPessoas * sizeof(Pessoa));

        printf("Insira o nome: ");
        scanf("%s", pessoas[numPessoas - 1].nome);

        printf("Insira o email: ");
        scanf("%s", pessoas[numPessoas - 1].email);

        printf("Insira a rua do endereco: ");
        scanf("%s", pessoas[numPessoas - 1].endereco.rua);
        
        printf("Insira o numero do endereco: ");
        scanf("%s", pessoas[numPessoas - 1].endereco.num_casa);
        
        printf("Insira o complemento do endereco: ");
        scanf("%s", pessoas[numPessoas - 1].endereco.complemento);
        
        printf("Insira o bairro do endereco: ");
        scanf("%s", pessoas[numPessoas - 1].endereco.bairro);
        
        printf("Insira a cidade do endereco: ");
        scanf("%s", pessoas[numPessoas - 1].endereco.cidade);
        
        printf("Insira o estado do endereco: ");
        scanf("%s", pessoas[numPessoas - 1].endereco.estado);
        
        printf("Insira o pais do endereco: ");
        scanf("%s", pessoas[numPessoas - 1].endereco.pais);

        printf("Insira o ddd do Telefone: ");
        scanf("%s", &pessoas[numPessoas - 1].telefone.ddd);
        
        printf("Insira o numero do Telefone: ");
        scanf("%s", &pessoas[numPessoas - 1].telefone.num_tel);
        
        printf("Insira o dia do nascimento: ");
        scanf("%s", &pessoas[numPessoas - 1].telefone.num_tel);
        
        printf("Insira o mes do nascimento: ");
        scanf("%s", &pessoas[numPessoas - 1].telefone.num_tel);
        
        printf("Insira o ano do nascimento: ");
        scanf("%s", &pessoas[numPessoas - 1].telefone.num_tel);

    } while (choice ==0 1);


    printf("======== MENU TELEFONE ==========\n");
    printf("1. Buscar por nome\n2. Busca por mes de aniversario\n3. Busca por dia e mes de aniversario\n4. Adicionar contato\n5. Remover contato\n6. Imprimir agenda");    
    scanf("%d", &user);
    
    int mes_busca, dia_busca;
    char nome_busca;

    switch (user)
    {
    
    case 1:
        printf("Digite o nome que deseja fazer a busca: ");

        break;
    
    case 2:
        printf("Digite o mes do aniversario: ");
        scanf("%d", &mes_busca);
        buscaPorMesAniversario(mes_busca);
        break;
    
    case 3:
        printf("Digite o dia e o mes do aniversario: ");
        scanf("%d", &dia_busca);
        scanf("%d", &mes_busca);
        buscaPorMesAniversario(mes_busca);
        break;
    
    case 4:
        printf("Digite os dados do contato: ");
        break;
    
    case 5:
        printf("Digite o nome que deseja remover: ");
        scanf("%s", &nome_busca);
        RemoverContato(nome_busca);
        break;
    
    case 6:
        ImprimirDados();
        break;
    
    default:
        printf("Opcao invalida!");
        break;
    }


}  

void AdicionarContato(Pessoa novoContato){

    int posicao = 0;
    
    for (i = 0; i < numContatos; i++) {
        if (strcmp(agenda[i].nome, novoContato.nome) > 0) {
            posicao = i;
            break;
        }
    }
    for (i = numContatos; i > posicao; i--) {
        agenda[i] = agenda[i - 1];
    }
    agenda[posicao] = novaPessoa;
    numContatos++;
}


void RemoverContato(char *nome){

    for (i = 0; i < numContatos; i++) {
        if (strcmp(agenda[i].nome, nome) == 0) {
            for (j = i; j < numContatos - 1; j++) {
                agenda[j] = agenda[j + 1];
            }
            numContatos--;
            break;
        }
    }
}


void ImprimirDados(){

    for (i = 0; i < numContatos; i++) {
            printf("Nome: %s\n", agenda[i].nome);
            printf("Email: %s\n", agenda[i].email);
            printf("Endereco: %s, %d, %s, %s, %s, %s, %s\n", agenda[i].endereco.rua, agenda[i].endereco.numero, agenda[i].endereco.complemento, agenda[i].endereco.bairro, agenda[i].endereco.cep, agenda[i].endereco.cidade, agenda[i].endereco.estado, agenda[i].endereco.pais);
            printf("Telefone: (%d) %d\n", agenda[i].telefone.ddd, agenda[i].telefone.numero);
            printf("Data de Aniversario: %d/%d/%d\n", agenda[i].data_aniversario.dia, agenda[i].data_aniversario.mes, agenda[i].data_aniversario.ano);
            printf("Observacao: %s\n", agenda[i].observacao);
            printf("\n");
    }
}

void buscaPorMesAniversario(int mes) {
    
    for (i = 0; i < numContatos; i++) {
        if (agenda[i].data_aniversario.mes == mes) {
            printf("Nome: %s\n", agenda[i].nome);
            printf("Email: %s\n", agenda[i].email);
            printf("Telefone: (%d) %d\n", agenda[i].telefone.ddd, agenda[i].telefone.numero);
            printf("\n");
        }
    }
}

void buscaPorDiaMesAniversario(int dia, int mes) {
    
    for (i = 0; i < numContatos; i++) {
        if (agenda[i].data_aniversario.dia == dia && agenda[i].data_aniversario.mes == mes) {
            printf("Nome: %s\n", agenda[i].nome);
            printf("Email: %s\n", agenda[i].email);
            printf("Telefone: (%d) %d\n", agenda[i].telefone.ddd, agenda[i].telefone.numero);
            printf("\n");
        }
    }
}