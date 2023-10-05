void incrementa(int v[], int l, int r){

    if (l > r){
        return;
    }

    incrementa(v, l, r-1) ;
    v[r]++;
}