#include <iostream>
// kiểu_dữ_liệu> (*<tên_con_trỏ>)([các_tham_số]);
// Ví dụ
// int (*funcPtr_sum)(int a, int b);
// Bạn có thể đặt tên tham số hoặc là không như thế này
int (*funcPtr_sum)(int, int);
int sum(int a, int b)
{
    
	return a + b;
}
int sum2(int a, int b)
{
    
	return a + b*2;
}
     // nên dùng
// Hoặc có thể dùng toán tử &

// Cả hai đều tương đương như sau
// Tại sao thì sẽ được giải thích bên dưới


// cos the truyen mot ham con tro vao funtion
void myFunc(int (*func_ptr2)(int, int))
{
    func_ptr2 = sum2;
	std::cout<<func_ptr2(4, 3);
}

int main(){
    funcPtr_sum = sum;
    funcPtr_sum = &sum;//nhu nhau
    // con tro ham tro den code chu ko tro den dia chi nen dung & hay * nhu ben duoi ko van de gi ca  
    
    std::cout<<funcPtr_sum(4, 5);    // được 9, nên dùng cách này
    // Hoặc dùng theo cách "con trỏ style"
    std::cout<<(*funcPtr_sum)(3, 4); // được 7
    std:: cout << std::endl << &funcPtr_sum << "\n" << *sum<< "\n" << &sum<< "\n" << funcPtr_sum;

    std::cout << "\n -------------------------------------------------------------- \n";

    int (*funcPtr_sum2)(int, int);
    // std::cout<<
    myFunc(funcPtr_sum2);

    // std::cout <<  funcPtr_sum2(8,3); ko duoc
    // ko can giai phong bo nho vi ko tro toi vung nho
    

    return 0;
}