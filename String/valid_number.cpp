// https://www.interviewbit.com/problems/valid-number/

int Solution::isNumber(const string str) {
// to remove whitespace 
string A;
int lidx=0,ridx=0;
for(int i=0;i<str.length();i++){
    if(str[i]==' ') lidx++;
    else break;
}
A=str.substr(lidx,str.length()-lidx);

for(int i=A.length()-1;i>=0;i--){
    if(A[i]==' ') ridx++;
    else break;
}
A=A.substr(0,A.length()-ridx);

//cout<<A<<endl<<A.length()<<endl;

bool numSeen=false, eSeen=false , dotSeen=false;
for(int i=0;i<A.length();i++){
    if(isdigit(A[i])){
        numSeen=true;
    }
    else if(A[i]=='e'){
        if(eSeen==true || numSeen==false ) return false;
        eSeen=true;
        numSeen=false;
    }
    else if(A[i]=='.'){
        if(eSeen==true || dotSeen==true) return false;
        dotSeen=true;
        numSeen=false;
    }
    else if(A[i]=='-' || A[i]=='+'){
        if(i!=0 && A[i-1]!='e') return false;
    }
    else{
        return false;
    }
}
return numSeen;
}