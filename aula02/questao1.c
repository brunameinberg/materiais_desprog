double pow(double b, int e){
    if (e == 0){
        return 1;
    }

    if (e > 0){
        return pow(b, e - 1) *b;
    }
    
    return pow(b, e + 1)/ b;
    
}