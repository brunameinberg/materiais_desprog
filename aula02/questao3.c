void acumula(int v[], int n){
    if (n == 1){
        return;
    }

    acumula(v, n-1);
    v[n - 1] = v[n - 1]+ v[n - 2];

}