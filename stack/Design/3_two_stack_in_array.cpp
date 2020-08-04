//https://www.geeksforgeeks.org/implement-two-stacks-in-an-array/
void twoStacks ::push2(int x)
{   
    if(top1 >= top2){return;}
    arr[--top2] = x;
}
   
/* The method pop to pop element from the stack 1 */
//Return the popped element
int twoStacks ::pop1()
{   
   if(top1 < 0){return -1;}
    int temp = arr[top1];
    top1--;
    return temp;
}

/* The method pop to pop element from the stack 2 */
//Return the popped element
int twoStacks :: pop2()
{
   if(top2 >= size){return -1;}
int temp = arr[top2];
top2++;
return temp;
}