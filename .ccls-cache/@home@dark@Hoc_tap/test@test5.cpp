#include <iostream>

    template <typename T,  int N>// thay thành tat
        class AArray{
        public:
            typedef T arr[N]; // bản chất là using arr = int(N)
           static  T &trave(const arr& t, int n){
                return const_cast<T&> (t[n]);
            }
        
        };
  
    // template <typename X>
    //     class AArray <X, 0>{
    //     public:
    //         class arr{  
    //             public:
    //         };
    //     };
    template <typename T,  int N>
       struct type224 {
            T x[N]; 
       };
    template <typename T,  int N>
        class Array{
        public:
            typedef AArray<T, N> tat; // 
            typename tat::arr m;// phải sử dụng typename chứ ko nó hiểu lầm là class chứ nhọc nữa 
            // typename AArray<T, N>::arr m2;
            // struct type24{

            // }
            // typename type224<T,N>::x m;
            // typename type2224::x m[3];

            // int m3[3];
            // T& at(int n){
            //     m[1] = 9;
            //     std::cout << m[1] << std::endl;
            //     return tat::trave(m, n);
            // }
            ~Array(){
                std::cout << "goi huy 2 \n";
            }
        };
    class ha{
    public:
        using arr = int[3];
        void ngu(){
            std::cout << "cai quai gi vay \n";
        }
    };
    // typedef struct hay{
    //     int a;
    //     int b;
    // }hay;
int main(){
    
    Array <int,3> a {1,2,3} ;
    // std::cout << a.at(1);
    
    // hay a{1,2};
    // ha h;
    // ha::arr b {1,2,3};
    // std::
    // std::cout << b[1];
    return 0;
}