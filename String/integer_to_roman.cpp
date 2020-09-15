// https://www.interviewbit.com/problems/integer-to-roman/

string Solution::intToRoman(int a) {
    map<int, string, greater<int> > m;
    m[1] = "I"; 
    m[4] = "IV"; 
    m[5] = "V"; 
    m[9] = "IX";
    m[10] = "X"; 
    m[40] = "XL"; 
    m[50] = "L"; 
    m[90] = "XC";
    m[100] = "C"; 
    m[400] = "CD"; 
    m[500] = "D"; 
    m[900] = "CM";
    m[1000] = "M";
    string ans = "";
    auto it = m.begin();
    while( a> 0) {
        if(it -> first > a) {
            it++;
        } else {
            ans += it->second;
            a -= it->first;
        }
     }
     return ans;
}
