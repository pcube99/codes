//https://practice.geeksforgeeks.org/problems/boolean-matrix-problem/0
#include <iostream>
#include <bits/stdc++.h>
#define rows 1000
#define cols 1000
using namespace std;

void print(int a[rows][cols],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

void insert(int a[rows][cols],int row,int col,int m,int n){
    for(int i=0;i<m;i++)
        a[i][col]=2;
    for(int j=0;j<n;j++)
        a[row][j]=2;
}

void modify(int a[rows][cols],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==1){
                insert(a,i,j,m,n);
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==2){
                a[i][j]=1;
            }
        }
    }
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int m,n;
	    cin>>m>>n;
	    int a[rows][cols];
	    for(int i=0;i<m;i++){
	        for(int j=0;j<n;j++){
	            cin>>a[i][j];
	        }
	    }
	    modify(a,m,n);
	    print(a,m,n);
	}
	return 0;
}