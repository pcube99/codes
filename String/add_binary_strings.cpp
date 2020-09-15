// https://www.interviewbit.com/problems/add-binary-strings/

string Solution::addBinary(string a, string b) {
    string ans = "";
    int i=0,j=0,carry = 0;
    if(a.size() > b.size()) {
        swap(a,b);
    }
    string temp = "";
    int diff = b.size()-a.size();
    while(diff--) {
        temp +='0';
    }
    a = temp + a;
    // cout << a << endl << b << endl;
    for(int i=a.size()-1;i>=0;i--) {
        if(a[i] == '1' && b[i] == '1') {
            if(carry == 1) {
                ans += '1';
            } else {
                carry = 1;
                ans += '0';
            }
        } else if((a[i] == '0' && b[i] == '1' ) ||
            (a[i] == '1' && b[i] == '0')) {
                if(carry == 1) {
                    ans += '0';
                    carry = 1;
                } else {
                    ans += '1';
                }
        } else if(a[i] == '0' && b[i] == '0') {
            if(carry == 1) {
                ans += '1';
                carry = 0;
            } else {
                ans += '0';
            }
        }
    }
    if(carry == 1) {
        ans += '1';
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
