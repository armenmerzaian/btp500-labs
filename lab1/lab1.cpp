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
    return 0;
}