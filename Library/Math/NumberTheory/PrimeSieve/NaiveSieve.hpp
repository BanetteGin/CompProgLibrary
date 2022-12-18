vector<long long int> search(long long int n){
    vector<long long int> prime_list;
    for(long long int i=2;i<=n;++i){
        bool flag = true;
        for(long long int j=2;j*j<=i;++j){
            if(i%j==0) {
                flag=false;
                break;
            }
        }
        if(flag){
            prime_list.emplace_back(i);
        }
    }
    return prime_list;
}