#include <iostream>
#include <string>
using namespace std;

int main() {
    int sources[5] = {90,85,78,92,88};

    cout << "sources[0]:" << sources[0] << endl;
    cout << "sources[1]:" << sources[1] << endl;
    cout << "sources[2]:" << sources[2] << endl;

    int sum = 0;
    for (int i=0;i<5;i++){
        sum =sum + sources[i];
    }
    cout << "sum:" << sum << endl;

    string name = "NingYang";
    cout << "name =" << name <<endl;
    cout <<"length =" <<name.length() <<endl;
    
    return 0;

}