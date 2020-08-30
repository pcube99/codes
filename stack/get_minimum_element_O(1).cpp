// https://practice.geeksforgeeks.org/problems/get-minimum-element-from-stack/1
int _stack :: getMin()
{
    return s.empty() ? -1 : s.top();
}
/*returns poped element from stack*/
int _stack ::pop()
{
    if (s.empty()) {
        return -1;
    }
    
    s.pop();
    int el = s.top();
    s.pop();
    return el;
}
/*push element x into the stack*/
void _stack::push(int x)
{
    int min_ = s.empty() ? x : min(s.top(), x);
    s.push(x);
    s.push(min_);
}
