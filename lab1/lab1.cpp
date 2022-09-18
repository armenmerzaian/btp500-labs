/**************************************************/
/*                                                */
/*  Lab 1 Starter file                            */
/*                                                */
/*  Name:    Armen Merzaian                       */
/*  Student number:  060207024                    */
/*                                                */
/**************************************************/

/* remember to code these in an iterative only manner*/

unsigned long long factorial (unsigned int n){
    if (n == 0) return 1;
    unsigned long long factorial = n;
    for (int i = n - 1; i >= 1; i--){ 
        factorial *= i;
    }
    return factorial;
}

unsigned long long power (unsigned int base, unsigned int exp){
    unsigned long long result = 1;
    for (int i = 0; i < exp; i++){
        result *= base;
    }
    return result;
}

unsigned long long fibonacci (unsigned int n){
   
    unsigned long long fib_0 = 0.0;
    unsigned long long fib_1 = 1.0;
    unsigned long long fib_n = 0.0;
    if (n == 1) fib_n = 1.0;
    
    for (unsigned int i = 1; i < n; i++){
        fib_n = fib_0 + fib_1;
        fib_0 = fib_1;
        fib_1 = fib_n;
    }
    return fib_n;
}