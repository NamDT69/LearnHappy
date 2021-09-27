#include <iostream>
#include <memory> //use smart pointer
struct Resource
{
	Resource() { std::cout << "Resource acquired\n"; }
	~Resource() { std::cout << "Resource destroyed\n"; }
	
	std::string getData() { return "I'm data"; }
};
// std::unique_ptr<Resource> createResource()
// {
//      return std::make_unique<Resource>();
// }
 
int main()
{
    // std::unique_ptr<Resource> ptr = createResource();
    // std::unique_ptr<Resource> ptr (new Resource);
    Resource a;
    // do whatever
 
    return 0;
}