#include <iostream>


int main(int argc, char** argv) {//argc co bao nhieu duong dan toi day,argv[]dia chi cac duong dan
    std::cout << "Have " << argc << " arguments:" << std::endl;
    for (int i = 0; i < argc; ++i) {
        std::cout << argv[i] << std::endl;
    }
    return 0;
}
