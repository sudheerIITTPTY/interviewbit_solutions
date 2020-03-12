int isPrime(int num){
    if(num ==1)
        return 0;
    for(int i = 2;i<=(int)sqrt(num);i++){
        if(num%i==0)
            return 0;
    }
    return 1;
}

vector<int> Solution::primesum(int A) {
    vector<int> primeSumNumbers;
    for(int i=2;i<A;i++){
        if(isPrime(i) && isPrime(A-i)){
            primeSumNumbers.push_back(i);
            primeSumNumbers.push_back(A-i);
            break;
        }
    }
    return primeSumNumbers;
    
}

