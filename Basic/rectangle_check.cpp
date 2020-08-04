int Solution::solve(int A, int B, int C, int D) {
    map<int, int> st;
    st[A]++;
    st[B]++;
    st[C]++;
    st[D]++;
    if(st.size() != 2) {
        return 0;
    }
    auto it = st.begin();
    if(it->second == 2) {
        it++;
        if(it->second == 2){
            return 1;
        }
    }
    return 0;
}
