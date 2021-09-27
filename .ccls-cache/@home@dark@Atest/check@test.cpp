#include <iostream>
#include <list>
#include <iterator>
#include <vector>
#include <array>
using namespace std;

void showlist(list <int> g)
{
	list <int> :: iterator it;
	for(it = g.begin(); it != g.end(); ++it)
		cout << '\t' << *it;
	cout << '\n';
}
void hay(){
	cout << "ban la ai";
}
int main(int argc , char *argv[])
{
	vector <int>  a   ;
	a.reserve(5);
	hay();
	//nếu push_back quas phần tử trên bộ nhớ đệm vector sẽ tạo ra một vùng nhớ gấp đôi rồi copy phần tử qua , xong xóa bộ nhớ cũ điều này làm cho địa chỉ sẽ ko cố định 
	// như vậy khi thời gian copy nếu cứ tăng cấp số nhân sẽ lớn . Như vậy sẽ cấp phát vùng nhớ cố định như 128;
	cout << a[6] << endl;
	cout << a.max_size() <<  endl;
	//câp phát thêm bộ nhớ nếu ko đủ 
	cout << a.capacity() << endl;
	cout << a.size() << endl;
	// delete các bộ nhớ còn thừa khi cấp phát động
	a.shrink_to_fit();
	cout << a.capacity() << endl;
	//a[i] thực ra *(a + i) nó là con trỏ không phải định danh 
	cout << &a[1] << " " << &a[2]<<endl;
	// cách nhau 24 bytes, 8 bytes là một con tror lần lượt begin , end, storge
	cout  << &a << " " << &a + 1<<endl;
	return 0;

}
