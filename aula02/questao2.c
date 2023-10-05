int num_digitos(int n){
    if(n < 10){
        return 1;
    }

    return num_digitos(n/10) + 1;
}