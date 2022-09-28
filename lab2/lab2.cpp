/**************************************************/
/*                                                */
/*  Lab 2 Starter file                            */
/*                                                */
/*  Name:   Armen Merzaian                        */
/*  Student number:    060207024                  */
/*                                                */
/**************************************************/

/* remember to code these in a RECURSIVE only manner*/

unsigned long long factorial (unsigned int n){
    if(n <= 0) return 1;
    unsigned long long val = n * factorial(n - 1);
    return val;
}

unsigned long long power (unsigned int base, unsigned int n){
    if(n <= 0) return 1;
    unsigned long long val = base * power(base, n - 1);   
    return val;
}
unsigned long long fibonacci (unsigned int n){
    if(n <= 1) return n;
    unsigned long long val = fibonacci(n - 1) + fibonacci(n - 2);
    return val; 
}