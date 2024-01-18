#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//? Como funciona o P2?

// O usuário escolhe entrar no sistema. Aí o sistema solicitará o username e a senha. Depois que o usuário digitar os dados solicitados, o sistema deve acessar o arquivo, procurar pelo username e ver se a senha bate com a senha armazenada.  
// Se a senha armazenada no arquivo for igual à senha digitada, liberar acesso para o usuário (deve aparecer uma mensagem de "acesso liberado"). 
// Se houver 3 tentativas de acesso incorretas (username inválido ou senha não confere com a armazenada), o sistema deve apresentar uma mensagem "Sistema travado por 1 hora".

// Atenção: Por questões de segurança, se o usuário tentar digitar um username que não está cadastrado, apenas a informação "Por favor, verifique se username e senha estão corretos e tente novamente".  

typedef struct {
    char nome[50];
    char sobrenome[50];
    int celular;
    char email[50];
    char username[50];
    char senha[50];
} Usuario;

int main(void) {
    char user_input[50];
    char senha_input[50];

    int contador_erros = 0;

    FILE *arquivo_acesso;
    Usuario FUNC;

    printf("Informe o seu nome de usuario: ");
    scanf("%s", user_input);  
    printf("Informe a senha: ");
    scanf("%s", senha_input);  

    char input_nome_arquivo[50];

    // Colocar o input no nome do suposto arquivo

    do {
        sprintf(input_nome_arquivo, "%s.bin", user_input);
        // Abrir o arquivo
        arquivo_acesso = fopen(input_nome_arquivo, "rb");

        if (arquivo_acesso == NULL) { // username seja o problemma
            printf("Numero de tentativas: %d (maximo de 3 tentativas)\n", contador_erros);
            printf("Nome de usuario nao encontrado, digite novamente: \n");
            scanf("%s", user_input);
            printf("Por favor, digite a senha novamente: \n");
            scanf("%s", senha_input);
            contador_erros++;
            
        } else {
            // Ler os dados do arquivo
            fread(&FUNC, sizeof(Usuario), 1, arquivo_acesso);

            if (strcmp(senha_input, FUNC.senha) == 0) {
                printf("Acesso liberado uwu\n");
                fclose(arquivo_acesso);
                return 0;
            } else {
                printf("Senha incorreta, tente novamente.\n");
                contador_erros++;
                printf("Numero de tentativas: %d\n (maximo de 3 tentativas)", contador_erros);
                printf("Informe a senha: ");
                scanf("%s", senha_input);  
            }
        }
    } while (contador_erros < 3);

    if (contador_erros == 3) {
        printf("Sistema travado por 1 hora.\n");
        fclose(arquivo_acesso);
        return 0;
    }

    fclose(arquivo_acesso);

    return 1;
}