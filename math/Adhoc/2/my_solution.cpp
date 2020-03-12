int pairHammingDistance(int a, int b){
    int hm = 0;
    if(a==b)
        return 0;
    while(a>0 || b>0){
        if(a%2 != b%2){
            hm++;
        }
        a=a/2;
        b=b/2;        
    }
    return hm;
}

int Solution::hammingDistance(const vector<int> &A) {
    
    int sumOfHammingDistance = 0;
    for(int i = 0;i<A.size()-1;i++){
        for(int j= i+1;j<A.size();j++){
            sumOfHammingDistance = sumOfHammingDistance + pairHammingDistance(A[i],A[j]);
        }
    }
    
    return (2*sumOfHammingDistance)%1000000007;
    
}

