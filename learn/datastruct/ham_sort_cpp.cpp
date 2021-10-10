//    Trong C++, người ta cung cấp sẵn một hàm sort trong thư viện algorithm để sắp xếp mảng với độ phức tạp O(nlog2n). Sử dụng như sau:

#include<algorithm>
#include<functional> // std::greater
using namespace std;

long long a[100005];
long long n;

int main()
{
    sort(a, a+n); // sắp xếp mảng a tăng dần từ phần tử 0 đến phần tử n-1
    sort(a+1, a+1+n); // sắp xếp mảng a tăng dần từ phần tử 1 đến phần tử n
    sort(a, a+n, greater<int>()); // sắp xếp mảng a giảm dần từ p.tử 0 đến p.tử n-1
}

    //   Nếu cần sắp một mảng các phần tử có kiểu struct thì cần viết thêm hàm so sánh. Ví dụ sắp xếp mảng PhanSo:

// #include<algorithm>
// using namespace std;

struct PhanSo
{
   long long ts;
    long long ms;    
};

PhanSo a[100005];
long long n;

bool SoSanh(const PhanSo &x, const PhanSo &y)
{
    return (double)x.ts/x.ms < (double)y.ts/y.ms;
}

int main()
{
    sort(a, a+n, SoSanh); // sắp xếp mảng phân số từ phần tử 0 đến phần tử n-1
    sort(a+1, a+1+n, SoSanh); // sắp xếp mảng phân số từ phần tử 1 đến phần tử n
}

 