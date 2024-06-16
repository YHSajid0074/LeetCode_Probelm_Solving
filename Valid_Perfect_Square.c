bool isPerfectSquare(int num) {
    int a=sqrt(num);
    double b=sqrt(num);
    if(a==b){
        return true;
    }
    return false;
}