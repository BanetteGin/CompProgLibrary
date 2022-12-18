vector<long long int> linear_sieve(long long int n){
    vector<long long int> prime_list;
    vector<long long int> lpf(n+1, n+1);
    lpf[0] = 0LL;
    lpf[1] = 1LL;
    for(long long int i=2;i<=n;++i){
        if(lpf[i] == n+1){
            lpf[i] = i;
            prime_list.emplace_back(i);
        }
        for(long long int j = 0; j < prime_list.size();++j){
            long long int p = prime_list[j];
            if(p * i > n || p > lpf[i]) break;
            lpf[p * i] = p;
        }
    }
    return prime_list;
}