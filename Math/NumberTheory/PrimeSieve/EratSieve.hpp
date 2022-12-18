vector<long long int> sieve(long long int n){
    vector<bool> ret(n+1,true);
    vector<long long int> prime_list;
    ret[0]=ret[1]=false;
    for(long long int i=2;i*i<=n;++i){
        if(!ret[i])continue;
        for(long long int j=i*2;j<=n;j+=i){
            ret[j]=false;
        }
    }
    for(long long int i=2;i<ret.size();++i){
        if(ret[i]) prime_list.emplace_back(i);
    }
    return prime_list;
}