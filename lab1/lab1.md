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
    for (int i = n - 1; i >= 1; i--){ //[1] [2]
        factorial *= i; //[1]  
    }
    return factorial; //[1]
```
```
    //operation count
    if (n == 0) return 1; // [3]x[1]
    unsigned long long factorial = n; //[1]x[1]
    for (int i = n - 1; i >= 1; i--){ //[1]x[1] + [2]x[n-1]
        factorial *= i; //[1]x[n-1] 
    }
    return factorial; //[1]x[1]
```
$T(n) = 3 + 1 + 1 + 2(n-1) + 1(n-1) + 1$\
$T(n) = 6 + 3(n-1)$\
$T(n) = 3n + 3$ 

$\therefore T(n) = O(f(n))$ iff for some constant $c$ and $n_{o}$, $T(n) <= cf(n)$ for all $n >= n_{o}$


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
Let $n$ represent the exponent value for the power.
\
Let $T(n)$ represent the runtime complexity for solving $x^n$

```
    //elementary count
    unsigned long long result = 1; //[1]
    for (int i = 0; i < exp; i++){ //[1] [2]
        result *= base; // [1]
    }
    return result; // [1]
```
```
    //operation count
    unsigned long long result = 1; //[1]x[1]
    for (int i = 0; i < exp; i++){ //[1]x[1] + [2]x[n]
        result *= base; // [1]x[1]
    }
    return result; // [1]x[1]
```
$T(n) = 1 + 1 + 2n + 1 + 1$\
$T(n) = 2n + 4$

$\therefore T(n) = O(f(n))$ iff for some constant $c$ and $n_{o}$, $T(n) <= cf(n)$ for all $n >= n_{o}$

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

Let $n$ represent the fibonacci term to find.
\
Let $T(n)$ represent the runtime complexity for solving finding the fibonacci of $n$

```
    //elementary count
    unsigned long long fib_0 = 0.0; // [1]
    unsigned long long fib_1 = 1.0; // [1]
    unsigned long long fib_n = 0.0; // [1]
    if (n == 1) fib_n = 1.0; // [1]
    
    for (unsigned int i = 1; i < n; i++){ // [1] [2]
        fib_n = fib_0 + fib_1; // [1]
        fib_0 = fib_1; // [1]
        fib_1 = fib_n; // [1]
    }
    return fib_n; // [1]
```
```
    //operation count
    unsigned long long fib_0 = 0.0; // [1]x[1]
    unsigned long long fib_1 = 1.0; // [1]x[1]
    unsigned long long fib_n = 0.0; // [1]x[1]
    if (n == 1) fib_n = 1.0; // [1]x[1]
    
    for (unsigned int i = 1; i < n; i++){ //[1]x[1] + [2]x[n-1]
        fib_n = fib_0 + fib_1; // [1]x[n-1]
        fib_0 = fib_1;  // [1]x[n-1]
        fib_1 = fib_n;  // [1]x[n-1]
    }
    return fib_n; //[1]
```
$T(n) = 1 + 1 + 1 + 1 + 1 + 2(n-1) + (n-1) + (n-1) + (n-1) + 1$\
$T(n) = 6 + 5(n-1)$\
$T(n) = 5n + 1$

$\therefore T(n) = O(f(n))$ iff for some constant $c$ and $n_{o}$, $T(n) <= cf(n)$ for all $n >= n_{o}$

### Iterative Bubble Sort Function
```c++
void bubbleSort(int arr[],int size){
    int tmp;                          
    for (int i=0; i<size-1; i++) {      
        for (int j=0; j<size-1-i; j++){   
            if (arr[j+1] < arr[j]) {    
                tmp = arr[j];             
                arr[j] = arr[j+1];        
                arr[j+1] = tmp;           
            }
        }
    }
}
```

Let $n$ represent the size of the array.
\
Let $T(n)$ represent the runtime complexity for sorting through the array of size $n$.

```
    //elementary count
    int tmp;    //[1]                          
    for (int i=0; i<size-1; i++) {  //[1] [3]    
        for (int j=0; j<size-1-i; j++){   //[1] [4]
            if (arr[j+1] < arr[j]) {   //[5] 
                tmp = arr[j];          //[2]     
                arr[j] = arr[j+1];     //[3]     
                arr[j+1] = tmp;        //[3]   
            }
        }
    }
```
```
    //operation count
    int tmp;            //[1]x[1]                
    for (int i=0; i<size-1; i++) {   //[1]x[1] + [3]x[n-1]   
        for (int j=0; j<size-1-i; j++){  //[1]x[n-1] + [4]x[(n-1)((n-1)+1)/2]
            if (arr[j+1] < arr[j]) {    //[5]x[(n-1)((n-1)+1)/2]
                tmp = arr[j];           //[2]x[(n-1)((n-1)+1)/2]  
                arr[j] = arr[j+1];      //[3]x[(n-1)((n-1)+1)/2]  
                arr[j+1] = tmp;         //[3]x[(n-1)((n-1)+1)/2]  
            }
        }
    }
```
$T(n) = 1 + 1 + 3(n-1) + 1(n-1) + 17((n-1)((n-1)+1)/2)$\
$T(n) = 1/2(17n^2 - 9n -4)$

$\therefore T(n) = O(f(n^2))$ iff for some constant $c$ and $n_{o}$, $T(n) <= cf(n)$ for all $n >= n_{o}$
