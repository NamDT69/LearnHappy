#include <iostream>
#include <cstddef>
using namespace std;	
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:
        
    //   Node* insert(Node *&head,int data)
    //   {
    //       Node *temp = new Node(data);
    //       if (head == NULL){
    //         return temp;
    //       }else if(head->next == NULL){
    //           head->next = temp;
    //       }else{
    //           insert(head->next,data);
    //       }
    //       return head;
    //   }
    // insert sex tra ve mot dia chi moi cua head 
    Node* insert(Node* head,int data) {
        // pp = địa chỉ của cái head lúc đầu là bằng 0
        Node** pp = &head;
        //-> thay cho bien.next 
        //pp = địa chỉ của biến next cho đên khi bằng 0
        while(*pp) pp = &((*pp)->next);
        // gán địa chỉ biến next= 0  đó cho 1 cái nút mới 
        *pp = new Node(data);
        //tra ve dia chi cua head ở vị trí đầu , chỉ thay đổi biến head lúc nó bằng 0 còn  lại không thay đổi gì hết nữa 
        //cả cụm head đấy sẽ được cộng thêm một cái nút mới
        return head;
    }

    void display(Node *head)
      {
          // gán start bằng 1 cụm head
         Node *start = head;
          while(start)
          {

              cout<<start->data<<" ";
              //dia chi gan bang 1 dia chi mowi ko anh huong toi ben ngoai
              // tror tới cụm tiếp theo
              start=(*start).next;
          }
      }
};
int main()
{

	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        // cụm head cũ gán bằng cụm head mới 
        head=mylist.insert(head,data);
    }	
    // lấy địa chỉ của head trỏ đến phần tử đầu tiên
    cout<<(*head).data;
    
	mylist.display(head);
    cout<<(*head).data;
		
}