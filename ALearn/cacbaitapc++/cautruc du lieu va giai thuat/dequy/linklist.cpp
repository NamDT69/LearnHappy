#include <iostream>
using namespace std;
struct node{
    int data ;
    node *next;
};
// void mac_dinh(node *a){
//     a.next = NULL;
//     a.data = NULL;
// }
node *taophantu(int x){
    node * a = new node();
    a->data = x;
    a->next = NULL;
    return a;
}
node *themvaocuoiphantu(node *a, int x){
    node *temp = taophantu(x);
    a->next = temp;
    return temp;
}
// void themvaocuoiphantu(node *a, int x){
//     node *temp = taophantu(x);
//     a->next = temp;
   
// }
void printList(node *p){
    while (p != NULL){
        cout << p->data;
        p = p->next;
    }
}

int main(){
    int n,x;
    cout<< "nha n";
    cin >> n;
    cin >> x;
    node *p = taophantu(x);
    node *l=p;
    for ( int i=1; i < n; ++i){
        cin>>x;
        l=themvaocuoiphantu(l, x);
    }
    printList (p);
    return 0;
}