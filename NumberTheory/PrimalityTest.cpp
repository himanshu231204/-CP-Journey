// Brute Force 

bool isPrime(int n){
    if(n==1) return false; // 1 is not a prime number
    for(int i=2;i<n;i++){
        if(n%i==0) return false;

    }
    return true;
}


// better solution: we run the loop till sqrt(n) time

bool isPrime(int n){
    if(n==1) return false; // 1 is not a prime number
    for(int i=2;i*i<=n;i++){  //  we can write sqrt(n) as (i*i<=n)
        if(n%i==0) return false;

    }
    return true;
}