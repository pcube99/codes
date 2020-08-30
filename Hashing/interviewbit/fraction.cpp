// https://www.interviewbit.com/problems/fraction/

string Solution::fractionToDecimal(int A, int B) {
    long long a,b;
    a = (long)A;
    b = (long)B;
    string ans = "";
    if((a < 0 && b > 0) || (b < 0 && a > 0)) {
        // cout << "asd";
        ans += "-";
    }
    a = abs(a);
    b = abs(b);
    long long rem,index;
    map<long long, long long> mp;
    bool repeat = false;
    ans += to_string(a/b);
    rem = a%b;
    if(rem == 0) {
        return ans;
    }
    ans += ".";
    while(rem > 0 && !repeat) {
        if(mp.find(rem) != mp.end()) {
            index = mp[rem];
            repeat = true;
            break;
        } else {
            mp[rem] = ans.size();
        }
        rem = rem * 10;
        ans += to_string(rem/b);
        rem = rem % b;
        
    }
    if(repeat) {
        ans += ")";
        ans.insert(index, "(");
    }
    return ans;
    
}
