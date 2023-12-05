/*
    int **p;   //* ponteiro de duas dimensões

        
    Vetor que aponta para cada uma das linhas;
    Vetor, que guarda endereço, apontam para as linhas da matriz;

    p = (int **) malloc(linha*sizeof(int *)); //! Vetor de endereços, vulgo Índice da Tabela.
    if (p == NULL)
        return 1;

    for (i=0;i<linha;i++) {
        p[i] = (int *) malloc(coluna*sizeof(int));
        if (p[i] === NULL)
            retun 1;
    }

    for (i=0;i<linha;i++)
        free(p[i]);
    
    free(p);

*/