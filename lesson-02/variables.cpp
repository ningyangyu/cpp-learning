#include <iostream>

int main() {
    int  age=20;
    double height =1.75;
    char grade ='A';
    bool isStudent= true;

    std::cout << "Age:"<<age<< std::endl;
    std::cout <<"Height:"<<height<< std::endl;
    std::cout <<"Grade:"<<grade<< std::endl;
    std::cout <<"Is Student:"<<isStudent<< std::endl;
    std::cout <<"Size of age:"<<sizeof(age)<< std::endl;

    return 0;
}