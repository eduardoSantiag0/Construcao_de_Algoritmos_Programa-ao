struct dado{
    int i;
    double d;
    float f;
    int matriz[20][10];
};



void zere_tudo (struct dado *registro){
    int i, j;
    registro->i = 0;
    registro->d = 0;
    registro->f = 0;
    for ( i = 0 ; i < 20 ; i++){
        for ( j = 0 ; j < 10 ; j++){
            registro->matriz[i][j] = 0;
        }

    }
}