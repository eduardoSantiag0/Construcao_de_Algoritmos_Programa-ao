#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Processo P1 que cadastra os dados do usuário;

// O usuário escolhe a opção de cadastro de novo usuário. Aí o sistema solicita os dados cadastrais (nome, sobrenome, celular, e-mail, username, senha).
// Note que senha deve ser digitada duas vezes, para se ter certeza que o usuário não digitou nada errado.
// Pode-se fazer a mesma coisa com o e-mail.
// Um arquivo para cada cadastro
// Uma vez que os dados estão todos corretos e confirmados pelo usuário, deve-se gravá-los no arquivo de forma que não possam ser bisbilhotados por terceiros. Sugere-se que seja usada alguma forma de criptografia.

// Atenção: os dados username, celular e e-mail são relevantes e devem ser únicos. Se uma pessoa estiver tentando cadastrar uma informação relevante que já está lá no cadastro, deve receber uma informação que já tem um cadastro para aquela pessoa.

typedef struct {
    char nome[50];
    char sobrenome[50];
    int celular;
    char email[50];
    char username[50];
    char senha[50];
} Usuario;


void salvarEmBinario (Usuario user) {
    printf("Funcionando\n");
    FILE *arqCadastro;

    char nomeArquivo[100];
    char textoFormatado [300];
    // fwrite(&alguma_variavel, sizeof alguma_variavel, quantidade, arquivo);

    // Nome do arquivo = nome_sobrenome.bin
    sprintf(nomeArquivo, "%s.bin", user.username);


    arqCadastro = fopen(nomeArquivo, "wb+");
    if (arqCadastro == NULL) {
        printf("Erro ao abrir arquivo");
        return;
    }

    // variavel que vai gravar, tamanho, quanntidade, onde;
    fwrite(&user, sizeof (Usuario), 1, arqCadastro);
    printf("Salvando e Fechando arquivo\n");
    fclose(arqCadastro);
    return;
}

int main (void)
{
    Usuario user;

    //! Pedindo os dados
    //todo Função retornando os dados
    printf(" Informme seu nome e sobrenome: ");
    scanf("%s %s", user.nome, user.sobrenome);
    printf("Informe o celular para contato: ");
    scanf("%d", &user.celular);
    printf("Informe o email: ");
    scanf("%s", user.email);
    printf("Informe o nome de usuario: ");
    scanf("%s", user.username);
    printf("Informe a senha: ");
    scanf("%s", user.senha);


    //! Verificar Senha
    char senhaVerificacao[50];
    printf("Confirme a senha: ");
    scanf("%s", senhaVerificacao);
    int cont = 0;
    while (strcmp(user.senha, senhaVerificacao) && cont < 3)
    {
        printf("Por favor, digite a mesma senha: ");
        scanf("%s", senhaVerificacao);
        cont++;
    }
    
    if (cont == 3) {
        printf("\nNumero de tentativas excedidas, tente novamente");
        exit(1);
    }

    //! Confirmação dos dados
    //todo Função para imprimir os dados, passando o struct como função
    printf("\t Confirme se os dados estao corretos: ");
    printf("Nome Completo: %s %s\n", user.nome, user.sobrenome);
    printf("Celular: %d\n", user.celular);
    printf("Email: %s\n", user.email);
    printf("Nome de usuario%s\n", user.username);
    printf("Senha: %s\n", user.senha);



    //! Salvar Arquivo em binário
    printf("Deseja salvar os dados no cadastro?\n");
    printf("Digite: 1 - Sim ou 2 - Nao \n");
    int escolha_salvar_User;
    scanf("%d", &escolha_salvar_User);
    if (escolha_salvar_User == 1) {
        salvarEmBinario(user);
        printf("\nCadastro concluido!");
        return 0;
    } else if (escolha_salvar_User == 2) {
        printf("D:");
        return 1;
    } else {
        printf("Erro de digitacao");
    }

    return 0;
}


