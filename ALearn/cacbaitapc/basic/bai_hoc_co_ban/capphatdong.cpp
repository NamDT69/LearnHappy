#include <iostream>
using namespace std;
int main(){
    int *p_arr = new int[10];

    //using this memory area
    for (int i = 0; i < 5; i++)
    {
        //Set value for each element
        cin >> p_arr[i];
    }
   int *hay=p_arr;
    cout<<"---------------------------\n";
    for (int i = 0; i < 5; i++)
    {
        //Set value for each element
        cout<<hay[i]<<endl;
    }
    system("pause");

    return 0;
}