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
1. Did you find it easier to write the recursive fibonacii() function or the iterative version?
  1. **Without performing a full analysis**
      * there is no right or wrong to this question ... just give it your honest best guess.  Its a hypothesis... **don't google for the answer**.  This is a hypothesis.  You do this then see if your observations support what you think.  Its ok to be wrong.
      * what do you think the runtime of your recursive fibonacci function is (stated with big-O notation)? 
      * Explain why you think this.
  2. Modify the file lab2timing.cpp to get a timing of running the fibonacci function. Record the time needed to run fib for n ranging from 21 to 45 inclusive (timing results for values smaller than 21 are pretty small but feel free to run and include them if you want).  Feel free to modify lab2timing.cpp however you want to get the data you need.
  3. Take the data you generated and create a line graph using a spreadsheet program such as google spreadsheet or excel.  The line graph should be organized as follows:
     * x axis represents n
     * y axis represents time
     * provide clear labeling and titles
     * place the image of the graph into your lab2.md file as part of your answer.  The easiest way to do this is to plot the graph using google spreadsheet and then use the built in sharing function and embedding functionality to create a link to the image for your lab2.md.  However, there are other ways and you are free to use whatever method you want as long as there is an image of the graph in your lab2.md.
  4. Given the timing, and your original guess, does the run time fit your original hypothesis?
