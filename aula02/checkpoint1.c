
int pow(int b, int e){

    if (e == 0){
        return 1;
    }
    return pow(b, e-1)*b;

}