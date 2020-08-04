string Solution::findDigitsInBinary(int a) {
    string s = "";
    if(a == 0 || a == 1) {
        s += to_string(a);
        // cout << s << a;
        return s;
    }
    while(a) {
        s += to_string(a%2);
        a/=2;
    }
    reverse(s.begin(), s.end());
    return s;
}
