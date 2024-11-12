



float mediaQuadrado(floa M[][MAX_COL], int linha, int coluna){
    float soma = 0;
    int c = 0;

    for( int i = linha - 1; i <= linha + 1; i++){
        for( int j = coluna - 1; i <= coluna +1; j++){
            if(i>=0 && i < MAX_LIN && j >= 0 && j < MAX_COL){
                soma = soma + M[i][j];
                c ++;
            }
        }
            media = soma/c;
    }

}