
unsigned long long factorial(unsigned int n){
    if ( n == 0 || n == 1) return 1;
    return n * factorial(n-1);
}

// This is the algorithm that was copied from your notes:
// https://catherine-leung.gitbook.io/data-strutures-and-algorithms/algorithms-analysis/how-to-do-an-analysis-in-5-steps

/*
unsigned int factorial (unsigned int n){
    unsigned int rc = 1;
    //multiplying 1*1 gives 1 so we don't start from 1
    for (unsigned int i=2;i<=n;i++){
        rc=rc*i;
    }
    return rc;
}
*/
// This does NOT work. Why?
