class Solution {
public:
    //cách chạy : thuật toán vét cạn 
//     "100011111110010111011";
//      n1 = 15 có 15 lần lật tất cả các mặt thành số 0;

//      {
//           n1 = 14 số 1 ở cuối thì còn 14 lần
//           n1 = 13   số 1 ở cuối thì còn 13 lần
//           n2 = 1 min = 13 số 0 thì vẫn  còn 13 lần
//           n1 = 12 còn 12 lần
//           n1 = 11 còn 11 lần
//           n1 = 10 còn 10 lần
//           n2 = 2 vẫn còn 10 lần ở phía trước 
    // đên chỗ n1 = 1 mà n2 = 4 thì cộng lại thì bằng 5 lật tất cả 5 lần 
          
    int minFlipsMonoIncr(string s) {
        int n = s.length();
        int n1 = 0;
        int n2 = 0;
        // 01110 số minn bé nhất khi giảm n1 == 0 vaf n2 = 1
        // quét từ đầu đến cuối cho hết số nào bằng 1 thì n1 ++ lên ;
        for (int i = 0; i < n; i++){
            if (s[i] == '1'){
                n1 ++;
            }
        }
        // n1 = 3
        int minn = n1;// lúc nay lật tất cả các số  1 sẽ là min
        for (int i = n -1 ; i >= 0; --i){// quét từ cuối lên đầu 
            if (s[i] == '0'){// cái nào bằng 0 thì tăng n2 ++;// n2 = 1
                n2 ++;
            }else{ // nếu là 1 thì giảm n1 xuống 
                n1 --;// n1 = 3
            }
            if (minn > n1 + n2){
                minn = n1 + n2;
            }
        }
        return minn;
    }
};