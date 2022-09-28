## Lab 2: Analysis

### Recursive Factorial Function
```c++
unsigned long long factorial (unsigned int n){
    if(n <= 0) return 1;
    return n * factorial(n - 1);
}
```
Let $n$ represent the base value of the factorial.
\
Let $T(n)$ represent the runtime complexity for solving $n!$
```
    //operation count
    if(n <= 0) return 1;  //[3]
    return n * factorial(n - 1); //[2] [factorial(n-1)]
```
$T(n) = (3 + 2 + T(n-1)) + 3$\
$T(n) = 5(n-1) + 3$\
$T(n) = 5n - 2$ 

$\therefore T(n) = O(f(n))$ iff for some constant $c$ and $n_{o}$, $T(n) <= cf(n)$ for all $n >= n_{o}$ \
$\therefore T(n)$ has Linear Complexity


### Recursive Power Function
```c++
unsigned long long power (unsigned int base, unsigned int n){
    if(n <= 0) return 1;
    return base * power(base, n - 1);
}
```
Let $n$ represent the exponent value for the power.
\
Let $T(n)$ represent the runtime complexity for solving $x^n$
```
    //operation count
    if(n <= 0) return 1;  //[3]
    return base * power(base, n - 1); //[2] [power(n-1)]
```
$T(n) = 3 + 2 + T(n-1) + 3$\
$T(n) = (5 + T(n-1)) + 3$\
$T(n) = 5(n-1) + 3$\
$T(n) = 5n - 2$

$\therefore T(n) = O(f(n))$ iff for some constant $c$ and $n_{o}$, $T(n) <= cf(n)$ for all $n >= n_{o}$
$\therefore T(n)$ has Linear Complexity


### Recursive Fibonacci Function
```c++
unsigned long long fibonacci (unsigned int n){
    if(n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2); 
}
```
1. Did you find it easier to write the recursive fibonacci() function or the iterative version?
   
   I found writing the recursive fibonacci method much easier to write than the iterative one. This is becuase naturally when I calculate fibonacci by hand
   I follow a recursive pattern, rather than an iterative one. Therefore translating my own familiar steps to code is much easier than wrapping my head         around an interative algorithm. 
      
2. What do you think the runtime of your recursive fibonacci function is (stated with big-O notation)?
      * Explain why you think this.
   I think the runtime for the recursive fibonacci is will be \$ T(n) = O(2^n)$ Exponential Complexity. This is becuase just by reading the code, I can           deduct that for every recursive call, the function will call two additional, and so on until n is reached with exponential growth.

3. Record the time needed to run fib for n ranging from 21 to 45 inclusive.

| n           | T(f(n)      |
| ----------- | ----------- |
|   21	      | 0.0000907   |
| 22 | 0.0001166 |
| 23 | 0.0003509 |
| 24 | 0.0004051 |
| 25 | 0.0007179 |
| 26 | 0.0008317 |
| 27 | 0.0018291 |
| 28 | 0.0023027 |
| 29 | 0.0041103 |
| 30 | 0.005339  |
| 31 | 0.0088621 |
| 32 | 0.0182402 |
| 33 | 0.0225901 |
| 34 | 0.0387604 |
| 35 | 0.0593763 |
| 36 | 0.0969567 |
| 37 | 0.155563  |
| 38 | 0.256818  |
| 39 | 0.403557  |
| 40 | 0.779868  |
| 41 | 1.09239   |
| 42 | 1.83036   |
| 43 | 2.91988   |
| 44 | 4.64459   |
| 45 | 8.16999   |



3. Generate a graph based on the data

![](https://docs.google.com/spreadsheets/d/e/2PACX-1vQXoqqvz9tdY-k8Zm0262vxbl7K0hvESwWwmWKMKULlEvoZpYJ_m0p35Yr6VaqxBEWuFHyuUEM1SX41/pubchart?oid=1708603981&format=image)


4. Given the timing, and your original guess, does the run time fit your original hypothesis?
   
   Yes, the runtime data does fit my original hypothesis. The data & graph confirm that the complexity of the recursive Fibonacci function is exponential. 
    $\therefore T(n) = O(2^n)$
