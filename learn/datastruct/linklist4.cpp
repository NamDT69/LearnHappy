#include <iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
struct link{
    node * head;
    node * tail;
};
void khoitao(link &l){
    l.head = NULL;
    l.tail = NULL;
}
node *taonut(int x){
    node *temp = new node();
    temp->data = x;
    temp->next = NULL;
    return temp;
}
void  lien_ket_nut(node *node, link &l){
    if (l.head == NULL){
        l.head = node;
        l.tail = node;
    }else{
        l.tail->next = node;
        l.tail = node;
    }
}
void xoa(link &l,int k){
    if (l.head != NULL){
        node *i = l.head;
        node *temp = l.head->next;
        while (temp != NULL){
            if (temp->data > k){
                i->next = temp->next;
                delete(temp);
                temp = i->next;
            }else{
                i = i->next;
                temp = temp->next;
            }
        }  
        l.tail = i;
    }
     if (l.head->data > k){
        node *tam = l.head;
        l.head = l.head->next;
        delete(tam);

    }
}
int timkiem(link &l, int k){
     if (l.head != NULL){
        node *i = l.head;
        int j = 0;
        int lua;
        
        while (i != NULL){
           if (j == k){
              return i->data;
           }
           i = i->next;
           j++;
        }
        // if (i->next == NULL){
        //     l.tail = i;
        // }
        
    }
}
void printflist (link l){
    if (l.head != NULL){
        node *tam = l.head;
        while (tam != NULL){
            cout << tam->data << " ";
            tam = tam->next;
        }
    }
}
int main(){
    int n, x;
    cin >> n;
    link l;
    khoitao(l);
    node *temp = new node();
    for (int i = 0; i < n; i++){
        cin >> x;
        temp = taonut (x);
        lien_ket_nut(temp, l);
    }
    int k;
    cin >> k;
    int a =  timkiem(l,k);
  //  cout << "ngu"<< a;
   
    xoa(l, a);
    printflist(l);
    return 0;
}