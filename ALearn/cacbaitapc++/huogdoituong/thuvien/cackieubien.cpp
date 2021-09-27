//static : là biến sử dụng để như biến toàn cục :
        // nó tồn tại đến hết chương trình thay vì chạy xong một hàm rồi hủy nó đi 


// Lớp lưu trữ auto trong C/C++ là lớp lưu trữ mặc định cho tất cả biến cục bộ trong C/C++:


// Lớp lưu trữ register trong C/C++ được sử dụng để định nghĩa các biến cục bộ mà nên được lưu giữ trong một thanh ghi thay vì RAM. Nghĩa là, biến có kích cỡ tối đa bằng với kích cỡ thanh ghi (thường là 1 từ) và không thể có toán tử một ngôi '&' được áp dụng tới nó (vì không có địa chỉ bộ nhớ).

        // {
        //    register int  hocphi;
        // }

        // Lớp lưu trữ register nên chỉ được dùng cho các biến yêu cầu truy cập nhanh như các biến đếm (counters). 
        //Cũng cần chú ý rằng, một biến định nghĩa với 'register' không có nghĩa là biến đó được lưu trữ trong thanh ghi.
        //  Tức là nó có thể được lưu trữ trong thanh ghi phụ thuộc vào phần cứng và giới hạn thực thi.


// Lớp lưu trữ extern trong C/C++

        // Lớp lưu trữ extern trong C/C++ được dùng để cung cấp một tham chiếu của một biến toàn cục được nhìn thấy bởi TẤT CẢ các file chương trình.
        //  Khi bạn sử dụng 'extern'
        // , biến không thể được khởi tạo, khi nó trỏ tới tên biến tại một vị trí lớp lưu trữ mà đã được định nghĩa trước đó.

        // Khi bạn có nhiều file và bạn định nghĩa một biến hay hàm toàn cục trong một file và cũng muốn dùng nó trong các file khác, 
        // thì extern được dùng trong file khác để cung cấp tham chiếu của biến hay hàm được định nghĩa.
        //  Cần nhớ rằng, extern dùng để khai báo một biến hay hàm toàn cục trong file khác.

        // Lớp lưu trữ extern được dùng phổ biến khi có hai hoặc nhiều file chia sẻ cùng biến hay hàm toàn cục. Xem ví dụ với hai file sau:

        // File đầu tiên: extern1.cpp

        // #include <iostream>
        
        // int biendem ;
        // extern void vidu_extern();
        
        // main()
        // {
        //    biendem = 5;
        //    vidu_extern();
        // }

        // File thứ hai: extern2.cpp

        // #include <iostream>
        
        // extern int biendem;
        
        // void vidu_extern(void)
        // {
        //    std::cout << "Gia tri biendem la " << count << std::endl;
        // }

        // Ở đây, từ khóa extern đang được sử dụng để khai báo biendem trong file khác. Bây giờ biên dịch hai file này như sau:

        // $g++ extern1.cpp extern2.cpp -o write

        // Nó sẽ tạo chương trình write có thể thực thi, bạn thử thực thi write và kiểm tra kết quả như sau:

        // $./write
        // 5

// Lớp lưu trữ mutable trong C/C++

        // Lớp lưu trữ mutable trong C/C++ chỉ áp dụng cho các đối tượng class, sẽ được bàn luận trong chương sau.
        //  Nó cho phép một thành viên của một đối tượng để override (ghi đè). Đó là, một thành viên là mutable có thể được sửa đổi bởi một hàm thành viên const.


// Cast:	Toán tử ép kiểu (Casting) trong C++ biến đổi một kiểu dữ liệu thành kiểu khác. Ví dụ: int(2.2000) sẽ trả về 2