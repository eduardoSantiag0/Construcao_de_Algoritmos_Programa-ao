#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Como funciona o P3?

// um processo P3 irá tratar dos casos em que o usuário esqueceu a senha. 

// Se o usuário escolher a opção "esqueci minha senha", deverá escolher se quer receber uma nova senha por telefone ou e-mail. Em seguida, deverá informar o e-mail ou o telefone (aquele meio escolhido). Se conferir com os dados armazenados, o sistema deverá apresentar um link de uma URL para troca de senha (apenas para simular o processo). 

typedef struct {
    char nome[50];
    char sobrenome[50];
    int celular;
    char email[50];
    char username[50];
    char senha[50];
} Usuario;

int main (void) {
    int refazerSenha;
    int refazerSenhaMeio;
    char emailInformado[50];
    char telefoneInformado[50];
    char usernameInformado[50];
    int contadorErros = 0;
    char input_nome_arquivo[50];

    Usuario FUNC;
    FILE *arquivo_acesso;

    printf("Esqueceu a sua senha? Digite 1 \n");
    scanf("%d", &refazerSenha);

    if (refazerSenha != 1) 
        return 0;
    
    printf("Qual seu nome de usuario? ");
    scanf("%s", usernameInformado);

    sprintf(input_nome_arquivo, "%s.bin", usernameInformado);
    arquivo_acesso = fopen(input_nome_arquivo, "rb");
    if (arquivo_acesso == NULL) {
        return 0;
    }
 
    printf("Por onde voce deseja redefinir a senha? \n");
    printf("Digite 1 para Email\n");
    printf("Digite 2 para Telefone\n");
    scanf("%d", &refazerSenhaMeio);


    // while (refazerSenhaMeio != 1 && refazerSenhaMeio != 2)
    // {
    //     printf("Digite 1 (Email) ou 2 (Telefone)\n")/
    //     scanf("%d", &refazerSenhaMeio);
    //     /* code */
    // }
    
    do {
        printf("Digite 1 (Email) ou 2 (Telefone)\n")/
        scanf("%d", &refazerSenhaMeio);
    } while (refazerSenhaMeio != 1 && refazerSenhaMeio != 2); 


    fread(&FUNC, sizeof(Usuario), 1, arquivo_acesso);

    if (refazerSenhaMeio == 1) // Email
    { 
        printf("Informe o email que está no cadastro");
        scanf("%s", emailInformado);
        
        while (strcmp(emailInformado, FUNC.email) != 0 && contadorErros != 3)
        {
            printf("Email informado nao corresponde ao do cadastro, digite novamente:");
            scanf("%s", emailInformado);
            contadorErros++;
            
        }
        printf("O email para redefinir a senha sera enviado para %s\n", FUNC.email);
        printf("Link: https://www.redefinindosenha/passwords/\n");
        fclose(arquivo_acesso);
        return 1;
    }
    if (refazerSenhaMeio == 2) // Email
    { 
        printf("Informe o telefone que está no cadastro");
        scanf("%s", telefoneInformado);
        while (telefoneInformado != FUNC.celular && contadorErros != 3)
        {
            printf("Celular informado nao corresponde ao do cadastro, digite novamente:");
            scanf("%s", telefoneInformado);
            contadorErros++;
        }
        printf("O email para redefinir a senha sera enviado para %s\n", FUNC.email);
        printf("Link: https://www.redefinindosenha/passwords/\n");
        fclose(arquivo_acesso);
        return 1;
    }


    
    return 1;
}