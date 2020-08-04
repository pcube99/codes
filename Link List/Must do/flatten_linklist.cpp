void Display1(Node *root){
while(root!=NULL){
printf("%d ",root->data);
root=root->next;
}
}
Node *flatten(Node *root)
{
//printf("\nBefore flattening\n");
//Display1(root);

Node *ptr=root;
while(ptr!=NULL){
if(ptr->bottom!=NULL){
Node *x=ptr->next;
ptr->bottom->next=x;
ptr->next=ptr->bottom;
}
ptr=ptr->next;
}
//printf("\nAfter flattening\n");
//Display1(root);
//printf("\n");

Node *i, *j;
for(i=root;i->next->next!=NULL;i=i->next){
for(j=i->next;j!=NULL;j=j->next){
if(i->data>j->data){
int t=i->data;
i->data=j->data;
j->data=t;
}
}
}
//printf("\nAfter sorting\n");
Display1(root);
//printf("\n");

}