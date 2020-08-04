int atoi(string str){
    long long ans=0;
    long long i=0;
    bool flag=0;
    if(str[0]=='-'){
        flag=1;
        i++;
    }
    for(;i<str.size();i++){
        if(!(str[i] >='0' && str[i] <='9'))
            return -1;
        ans = (ans*10)+str[i]-'0';
    }
    if(flag)
        return -ans;
    return ans;
}