#include <iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
struct link{
    node *head;
    node *tail;
};
void khoitao (link &l){
    l.head = NULL;
    l.tail = NULL;
}
node *taonut (int x){
    node *temp = new node();
    temp->data = x;
    temp->next = NULL;
    return temp;
}
void lienketcacnut(link &l, node *s){
    if (l.head == NULL){
        l.head = s;
        l.tail = s;
    }else{
        l.tail->next = s;
        l.tail = s;
    }
}
void inserrt(link &l, node *s, int k){
    if (l.head != NULL){
        node * temp = l.head;
        l.tail = s;
        int i = 0;
        while (temp != NULL){
             if (i==0 && i == k){
               
                l.tail->next = temp;
                 temp= l.tail;
            }
            if (i+1 == k){
                l.tail->next = temp ->next;
                temp->next = l.tail;
            }
            i++;
            temp = temp->next;
        }
       l.tail = temp;
    }
    
 }
// void inserrt(link &l, node *s, int k){
//     int i=1;
//     l.tail = s;
//     node * tam = l.head;
//         while (l.head != NULL){
//             if (i == k){
//                 l.tail->next = l.head ->next;
//                 l.head->next = l.tail;
//             }
//             i++;
//             l.head = l.head->next;
//         }
//     l.head = tam;
    
// }

void printflist(link l){
    if (l.head != NULL){
        node * temp = l.head;
      
        while (temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
}
int main(){
    int n, x, k, x2;
    cin >> n;
    link l;
    khoitao (l);
    node * temp;
    for (int i = 0; i < n; ++i){
        cin >> x;
        temp = taonut (x);
        lienketcacnut(l, temp);
    }
    cin >> k >> x2;
    node *c = taonut(x2);
    inserrt(l, c, k);
    printflist (l);

    return 0;
}