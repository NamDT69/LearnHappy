#include <iostream>
#include <string>
#include <vector>
//  2 3 4 + * 5 - 2 2 * +
class Stack{
public:
    
    int top = -1;
    int arr[10000];
    void push(int, int);
    void pop();
    bool isEmpty();
    bool isFull(int);
    int ttop(){
        return arr[top];
    }
    int sizeoff(){
        return top + 1;
    }
};
//kiểm tra xem stack có rỗng hay ko
bool Stack::isEmpty(){
    return (this->top == -1 ? true : false);
}
// kiểm tra xem stack đã đầy hay chưa 
bool Stack::isFull(int n){
    return (this->top >= n ? true : false );
}
//thêm 1 phần tử vào stack
void Stack::push(int number, int n = 10000){
    if (isFull(n)){
        std::cout << "Full phan tu";
    }else{
        ++top;
        arr[top] = number;
    }
}
//xóa phần tưr đầu tiên của stack
void Stack::pop(){
    if(isEmpty()){
        std::cout << "ko co gi de xoa";
    }else{
        arr[top] = 0;
        --top;
    }
}

int bieuThucHauTo(std::vector<std::string> s){
    Stack a;
    int length = s.size();
    for(int i = 0; i < length; i ++){
       
        if (s[i] == "+"){
            int temp = a.ttop();
            a.pop();
            temp += a.ttop();
            a.pop();
            a.push(temp);
        }
        else if (s[i] == "-" || s[i] == "–"){
            int temp = a.ttop();
            a.pop();
            int h = a.ttop();
            temp = h - temp;
            a.pop();
            a.push(temp);
        }
        else if (s[i] == "*"){
            int temp = a.ttop();
            a.pop();
            temp *= a.ttop();
            a.pop();
            a.push(temp);
        }
        else if (s[i] == "/"){
            int temp = a.ttop();
            a.pop();
            int h = a.ttop();
            temp =h / temp;
            a.pop();
            a.push(temp);
        }else{
            //chủyển chúổi số string thành int 
            a.push(stoi(s[i]));
        }
    }
    return a.ttop();

}
// ham split dùng để tách các chuôix phân cách bởi space , sau đó cho vào vector
std::vector<std::string> split(std::string s){
    int start = 0;
    int end = 0;
    std::vector<std::string> a;
    
        for (end; end < s.length(); end++){
            if(s[end] == 32){
                //substr hàm trong string dùng để  cắt chuổi từ start đến start + (end - start)
                a.push_back(s.substr(start, end - start));
                start = end + 1;
            }
        }
        a.push_back(s.substr(start, end - start));
    
    return a;
}
int main(){
    std::string s;
    getline(std::cin, s);
    std::cout << bieuThucHauTo(split(s));
    
    return 0;
}