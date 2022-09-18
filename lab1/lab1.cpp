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

unsigned long long power (unsigned int base, unsigned int n){
    return 0;
}

unsigned long long fibonacci (unsigned int n){
    return 0;
}