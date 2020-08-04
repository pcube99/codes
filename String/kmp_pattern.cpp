int Solution::strStr(const string a, const string b) {
    if(a.size() == 0 || b.size() ==0)   
        return -1;
    vector<int> lps(b.size());
    lps[0]=0;
    int i=1,j=0;
    while(i  < b.size()){
        if(b[i] == b[j]){
            j++;
            lps[i]=j;
            i++;
        }
        else{
            if(j!=0){
                j=lps[j-1];
            }
            else{
                lps[i]=0;
                i++;
            }
        }
    }
    // for(int i=0;i<b.size();i++){
    //     cout << lps[i] << " ";
    // }
    // cout << endl;
    int ii=0,jj=0;
    while(ii < a.size()){
        if(a[ii] == b[jj]){
            jj++;
            ii++;
        }
        if(jj == b.size()){
            return ii-jj;
        }
        else if(ii<a.size() && a[ii]!=b[jj]){
            if(jj!=0)
                jj=lps[jj-1];
            else
                ii++;
        }
    }
    return -1;
}
