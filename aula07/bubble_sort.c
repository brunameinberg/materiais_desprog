void troca(int v[], int i, int j){
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

void bubble_sort(int v[], int n){
    for (int i = n - 1; i > 0; i--){ //para cada i em (n-1, n-2, n-3, ..., 1)
        int trocou = 0;              //trocou = não

        for (int j = 0; j < i; j++){ //     para cada j em (0, 1, 2, ..., i-1)
            if(v[j] > v[j + 1]){     //         se v[j] > v[j + 1]
                troca(v, j, j+1);    //         trocou = sim
                trocou = 1;
            }
        }
        if (!trocou){                //     se não trocou
            break;                   //         interrompe o loop
        }
    }
}