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
void printList(node *p){
    while (p != NULL){
        cout << p->data;
        p = p->next;
    }
}
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
void xoa(node *a, int k){
    int i = 0;
    node * c=a;
    while (a != NULL){
        if (i == 0 && i == k){
            a = c->next;
            break;
        }
        if ( i!=0 && i== k){
          c->next = a->next;
          break;
        }
        c=a;
        a = a -> next;
        i++;
        
    }
    printList(a);
}
// void themvaocuoiphantu(node *a, int x){
//     node *temp = taophantu(x);
//     a->next = temp;
   
// }


int main(){
    int n,x,k;
    
    cin >> n;
    cin >> x;
    node *p = taophantu(x);
    node *l=p;
    for ( int i=1; i < n; ++i){
        cin>>x;
        l=themvaocuoiphantu(l, x);
    }
    cin >> k;
    xoa(p,k);
   
    return 0;
}