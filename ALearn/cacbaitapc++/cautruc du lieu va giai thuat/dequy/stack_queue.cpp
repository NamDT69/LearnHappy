#include <iostream>

using namespace std;

class Solution {
    //Write your code here
private:
    char s[1000];
    char q[1000];

public:
    static int i;
    static int j;
    void pushCharacter(char x){
        s[i] = x;
        
    }
    void enqueueCharacter(char x){
        q[i] = x;
        i ++;
    }
    char popCharacter(){
        i --;
        return s[i];
    }
    char dequeueCharacter(){
        j++;
        return q[j];
        
    }
};
int Solution::i = 0;
int Solution::j = -1;
int main() {
    // read the string s.
    string s;
    getline(cin, s);
    
  	// create the Solution class object p.
    Solution obj;
    
    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    
    for (int i = 0; i < s.length(); i++) {
        cout << obj.popCharacter() << " ";
   
    }

    cout << "\n";
    for (int i = 0; i < s.length(); i++) {
        cout << obj.dequeueCharacter() << " ";
   
    }
    
   
   
    return 0;
}