#include <iostream>

int pivot(int a[], int l, int r){
    // nên lấy pivot ở giữa , còn tùy theo trường hợp lấy đầu hay lấy cuối 
    int x = a[l];
    while(l != r){
        // nếu a[r] < pivot thì a[l] = a[r] ko thì giảm r xuống
        while (a[r] >= x && r > l){
            --r;
        }
        a[l] = a[r];
        // nêus a[l] > pivot thì a[r] = a[l] ko thì tăng l lên
        while (a[l] <= x && l < r){
            ++l;
        }
        a[r] = a[l];
    }
    a[l] = x;
    return l;
}


// bản chất thì đệ quy nó cũng giống như xếp lên stack xữ lý từng cái 1  từ trên xuống dưới 
void quickSort(int a[], int l, int r){

    // tạo ra một không gian thêm log(n)
    // tạo ra một stack để lưa l và r, nếu mà pivot ở giữa thì ta cứ xếp chồng lên đến khi hết thì thôi
    int stack[r - l + 1];
    // khởi tạo giá trị top
    int top = 0;
    stack[top] = l; //stack[0] = l, còn top = 0
    stack[++top] = r; // top lúc này bằng 1 , stack[1] = h, vì ++top nghĩa là cộng top trứớc 
    int m;

    // khi nào top < 0 thì hết phần tử thì dừng lại
    while (top >= 0){
        // lấy r ở stack vừa bỏ vào
        r = stack[top--];// nghĩa là lấy r = stack[1] xong giảm top xuống bằng 0
        l = stack[top--]; // lấy l = stack[0] sau đó top = -1

        // triển khai stack , tìm vị trí phần tử và cố định nó
        m = pivot(a, l, r);
        //  nếu m lớn hơn 2 vị trí thứ 2 thì thêm vào stack
        if (m - 1 > l){
            stack[++top] = l;
            stack[++top] = m - 1;
        }
        // nếu m < 2 phần tử  cuối thì thêm vào stack
        if (m + 1 < r){
            stack[++top] = m + 1;
            stack[++top] = r;
        }

        //   tiếp tục xữ lí stack trên cùng đến khi hết
    }

}
int main(){
    int a[] = {5,3,5,345,346,46,24,65,2,6423,645};
    int n = sizeof(a) / sizeof(a[0]);
    quickSort(a, 0, n - 1);
    for (int i = 0; i < n; ++i){
        std::cout << a[i] << "\t" ;
    }
    return 0;
}