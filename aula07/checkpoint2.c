int checa_vetor(int v[], int n){

for (int i = 0; i < n - 1; i++){
    if (v[i] > v[i+1]){
        return 0;
    }

}
return 1;
}