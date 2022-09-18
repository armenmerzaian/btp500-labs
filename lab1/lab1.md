## Lab 1: Analysis

### Iterative Factorial Function
```c++
unsigned long long factorial (unsigned int n){
    if (n == 0) return 1;
    unsigned long long factorial = n;
    for (int i = n - 1; i >= 1; i--){ 
        factorial *= i;
    }
    return factorial;
}
```
Let $n$ represent the base value of the factorial.
\
Let $T(n)$ represent the runtime complexity for solving $n!$

```
    //elementary count
    if (n == 0) return 1; // [3]
    unsigned long long factorial = n; //[1]
    for (int i = n - 1; i >= 1; i--){ //[4]
        factorial *= i; //[1]  
    }
    return factorial; //[1]
```
```
    //operation count
    if (n == 0) return 1; // [3]x[1]
    unsigned long long factorial = n; //[1]x[1]
    for (int i = n - 1; i >= 1; i--){ //[4]x[n-1]
        factorial *= i; //[1]x[n-1]  
    }
    return factorial; //[1]x[1]
```


### Iterative Power Function
```c++
unsigned long long power (unsigned int base, unsigned int exp){
    unsigned long long result = 1;
    for (int i = 0; i < exp; i++){
        result *= base;
    }
    return result;
}
```

### Iterative Fibonacci Function
```c++
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
```
