#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;
class Calculator{
public:
    int power(int n, int p){
        if(n < 0 || p < 0) {
           throw runtime_error("n and p should be non-negative");
        }
        return pow(n,p);
    }
    
};
//Write your code here

int main()
{
    // Calculator myCalculator=Calculator();
    // int T,n,p;
    // cin>>T;
    // while(T-->0){
    //   if(scanf("%d %d",&n,&p)==2){
    //      try{
    //            int ans=myCalculator.power(n,p);
    //            cout<<ans<<endl; 
    //      }
    //      catch(exception &e){
    //          cout<<e.what()<<endl;
    //      }
    //   }
    // }


    try {
        int m = 12;
        if (m > 21){
            cout << "dung r";
        }else{
            throw logic_error("loi 505");
        }
    }catch(exception &e){
        cout << e.what();
    }
    //system("pause");
}

