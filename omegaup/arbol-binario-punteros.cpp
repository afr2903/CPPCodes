#include<iostream>
using namespace std;
struct node{
    int v;
    node *right;
    node *left;
};
void memoria(node **p){
    *p = new(node);
    (*p)->left=NULL;
    (*p)->right=NULL;
}
void recorrer(node *p){
    if(p->left!=NULL)recorrer(p->left);
    cout<<p->v<<" ";
    if(p->right!=NULL)recorrer(p->right);
}
void agregar(node *p, int cv){

    if(cv>p->v){
        if(p->right==NULL){
            memoria(&(p->right));
            (p->right)->v=cv;
        }
        else {
            agregar(p->right, cv);
        }
    }
    else{
        if(p->left==NULL){
            memoria(&(p->left));
            (p->left)->v=cv;
        }
        else {
            agregar(p->left, cv);
        }
    }

}

int main(){
    int n, v;
    cin>>n>>v;
    node *root;
    memoria(&root);
    root->v=v;
    for(n--; n>0; n--){
        cin>>v;
        agregar(root , v);
    }
    recorrer(root);
}
