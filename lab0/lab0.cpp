
unsigned long long factorial(unsigned int n){
    if ( n == 0 || n == 1) return 1; 
    return n * factorial(n-1);
}
