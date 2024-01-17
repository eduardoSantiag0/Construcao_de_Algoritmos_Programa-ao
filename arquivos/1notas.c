// fopen() com “a” or “a+” or “w” or “w+” -> Criar um novo arquivo
// fopen() -> Abrir arquivo
// fscanf() or fgets() -> Ler arquivo
// fprintf() or fputs() -> Escrever no arquivo
// fseek(), rewind() -> Mover arquivo
// fclose() -> Fechar arquivo
// fflush -> Limpeza do buffer do teclado


// FILE *arquivo1, *arquivo2; 
// arquivo1 = fopen("entrada.dat", "rb+");
// arquivo2 = fopen("saida.dat", "wb");

// Arquivo e Formato que será usado 

// As opções de abrir um arquivo para escrita, como já visto, são "w", "w+", "r+", "a" e "a+". 

// Dentro do nosso contexto, considerando arquivos binários, escolha "wb", "wb+", "rb+", "ab" e "ab+".