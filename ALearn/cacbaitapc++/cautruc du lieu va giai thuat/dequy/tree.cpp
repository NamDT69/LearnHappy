#include <iostream>
using namespace std;
class node{
    public :
        int data;
        node *left;
        node *right;
};
node *create(node *root, int x){
    if (root == NULL){
        node *roott = new node();
        roott->data = x;
        roott->left = NULL;
        roott->right = NULL;
        return roott;
    }
    if (root->data > x){
        root->left = create(root->left , x);
    }else{
        root->right = create(root->right , x);
    }
}

int kiemtra(node *root){
    if(root == NULL){
        return 0;
    }
    if (root->left == NULL && root->right == NULL){
        return 1;
    }
    return kiemtra(root->left) + kiemtra(root->right);
}
int main(){
    int n, x;
    cin >> n;
    node *root =NULL;
    for (int i = 0; i < n; i++){
        cin >> x;
        root = create(root, x);
    }   
 
    cout << kiemtra(root);
    return 0;
}