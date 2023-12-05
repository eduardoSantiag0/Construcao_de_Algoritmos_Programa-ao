/*

    Ponteiro: variável que armazena endereço;

    int valor = 27;
    int *ptr;
    ptr = &valor;
    : *ptr = 43  ---> conteudo (*) de ptr é 43;

    Estática: olhando o código dá para perceber o que vai acontecer com a memória; 
    Dinâmica: só sabe em tempo de execução 

    malloc --> emprestimmo de um livre. Pede um endereço para sser usado;

    calloc --> limpa o espaço e garante o tamanho requisitado.. Tradeoff de tempo para limpeza do espaçço

    ! Uso de malloc:
    * Criar um vetor que o tamanho é determinado em runtime
    * Estruturas dinâmicas
    * Listas ligadas
  
    free --> a devolução do livro para a bibllioteca. Permite que esse endereço seja utilizado novamente;

    buffer overflow = o código tenta acessar uma posição que está allém do limite que solicitou;

    memory leak: isso acontece quando o programador perde o ponteiro para uma região de memória alocada dinamicamente. 

*/