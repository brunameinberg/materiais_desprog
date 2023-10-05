int soma(int v[], int n){
    //devolve v[0] + v[1] + v[2] ... + v[n-1]

    if (n == 0){
        return 0;
    }

    return soma(v, n-1) + v[n-1];
}