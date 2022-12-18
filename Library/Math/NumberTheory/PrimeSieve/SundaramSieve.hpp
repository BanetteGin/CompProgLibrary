vector<long long int> SundSieve(long long int n){
    vector<bool> ret((n+1)/2,true);
    vector<long long int> prime_list = {2};
    ret[0] = false;
    long long int m = ((n+1)/2-2)/3;
    for(long long int a=1;a<=m;++a){
        for(long long int b=1;b<=a&&a+b+2*a*b<=(n+1)/2-1;++b){
            ret[a+b+2*a*b] = false;
        }
    }
    for(long long int i=0;i<ret.size();++i){
        if(ret[i]) prime_list.emplace_back(i*2+1);
    }
    return prime_list;
}