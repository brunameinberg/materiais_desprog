int intlog2(int n){
    //devolve e tal que n = 2^e

    if (n == 1){
        return 0;
    }

    return intlog2(n / 2) + 1;
}