//https://www.geeksforgeeks.org/segregate-even-and-odd-elements-in-a-linked-list/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct Node{
    int data;
    struct Node* next;
    
};

void push(struct Node** head, int new_data) 
{ 
    struct Node* t = 
        (struct Node*) malloc(sizeof(struct Node)); 
      t->data = new_data; 
      t->next = (*head); 
      (*head) = t; 
} 
void solve(struct Node** head){
    Node* evenstart=NULL,*evenend=NULL,*oddstart=NULL,*oddend=NULL;
    Node* current=*head;
    while(current != NULL){
        if(current->data %2 == 0){
            if(evenstart == NULL){
                evenstart=current;
                evenend=evenstart;
            }
            else{
                evenend->next=current;
                evenend=evenend->next;
            }
        }
        else{
            if(oddstart == NULL){
                oddstart=current;
                oddend=oddstart;
            }
            else{
                oddend->next= current;
                oddend=oddend->next;
                
            }
        }
        current=current->next;
    }
    
    if(oddstart==NULL || evenstart == NULL)
        return;
    evenend->next=oddstart;
    oddend->next=NULL;
    *head=evenstart;
}
int main(){
ll t;
cin >> t;
while(t--){
    ll n;
    cin >> n;
    ll a[n];
    struct Node* head = NULL; 
    for(ll i=0;i<n;i++){
        cin >> a[i];
    }
    for(ll i=n-1;i>=0;i--)
        push(&head, a[i]);
    solve(&head);
    while(head){
        cout << head->data << " ";
        head=head->next;
    }
    cout << endl;
}
return 0;
}

