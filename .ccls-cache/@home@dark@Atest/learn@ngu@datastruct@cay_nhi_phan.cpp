#include <iostream>
using namespace std;
struct node{
    int data;
    node  *left;
    node *right;
};
node *creat( int x){
    node *temp = new node();
    temp->data = x;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
void insert(node *hientai, node *h){
    if (hientai->data < h->data && hientai ->left == NULL){
        hientai->left = h;
        return;
    }else if (hientai->data >= h->data && hientai->right == NULL){
        hientai->right = h;
        return;
    }
    if (hientai->data < h->data){
        insert(hientai->left, h);
    }else{
        insert(hientai->right, h);
    }
}
void printft(node *root){
    if (root != NULL){
        printft(root->right);
        cout << root->data <<" ";
        printft(root->left);
    }
}
int main(){
    int n, x;
    cin >> n >> x;
    node *root = creat(x);
    node *next = root;
    node *temp = new node();
    for (int i = 1; i < n; i++){
        cin >> x;
        temp = creat(x);
        insert(next , temp);
    }
    printft (root);
    return 0;
}