
unsigned long long factorial(unsigned int n){
    if ( n == 0 || n == 1) return 2; //return 2 is error for github actions tester
    return n * factorial(n-1);
}
