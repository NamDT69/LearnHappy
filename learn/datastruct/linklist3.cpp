#include <iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
struct link{
    node * head;
    node * tail;
};
void taolink(link &a){
    a.head = NULL;
    a.tail = NULL;
}
node * taonode(int x){
   node * temp = new node();
   temp->data = x;
    temp->next = NULL;
    return temp;
}
// void linklist(node *a, link &l){
//     if (l.head == NULL){
//         l.head = a;
//         l.tail = a;
//     }else{
//         a->next = l.head;
// 		l.head = a;
//     }
// }
void linklist(node *a, link &l){
   
  
    if (l.head == NULL){
        l.head = a;
        l.tail = a;
    }else{
       l.tail->next=a;
       l.tail = a;
        
    }

}
void printflist (link &l){
    if (l.head != NULL){
        node * a= l.head;
        while (a!=NULL){
            cout << a->data << "\t";
            a = a->next;
        }
    }
}
int main(){
    link lisst;
    taolink(lisst);
    int n, x;
    cout<< "nhap n :";
    cin >> n;

    node * ds ;
    for (int i = 0; i < n; ++i){
        cin >> x;
        ds = taonode(x);
        linklist (ds, lisst); 
    }
    printflist(lisst);
    return 0;
}