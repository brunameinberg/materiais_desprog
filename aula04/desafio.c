int busca_binaria(int v[], int  n, int q){
    int l = 0;
    int r = n - 1;

    while (l <= r){
        int m = (l + r) / 2;

        if (v[m] == q){
            return m;
        }

        if (v[m] < q){
            l = m + 1;
        }
        else{
            r = m - 1;
        }
    }
    return -1;
}


int bb_recursiva(int v[], int l, int r, int q){

    int m = (l + r)/2;

    if (v[m] == q){
        return m;
    }

    if (v[m] < q){
        bb_recursiva(v, m+1, r, q);
    }

    else{
        bb_recursiva(v, l, m-1, q);
    }
}