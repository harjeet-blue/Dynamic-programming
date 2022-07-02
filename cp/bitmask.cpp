void bitmask(){

    int m;  // no of elements in the set
    
    for(int mask = 0 ; mask<(1<<m) ; mask++){

        for(int i = 0 ; i<m ; i++){

            if( (mask&(1<<i)) !=0 ){

            }else{

            }
        }
    }

}

// max-lis

int max_lis(vector<int> a){

    int n = a.size();
    vector<int> lis, dp(n);

    for(int i = 0 ; i<n ; i++){

        auto it  = lower_bound(lis.begin(),lis.end(), a[i]) - lis.begin();

        if(it==(lis.size()))lis.push_back(a[i]);

        else lis[it] = a[i];
        
        dp[i] = lis.size();

    }

    return dp[n-1];
}