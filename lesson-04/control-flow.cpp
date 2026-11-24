#include <iostream>
using namespace std;

int main() {
    int score=85;
    
    if(score>=90){
        cout<<"A"<<endl;
    }else if (score>=80){
        cout<<"B"<<endl;
    }else if(score>=60){
        cout<<"C"<<endl;
    }else{
        cout<<"D"<<endl;
    }
    
    int i=0;
    while(i<3){
        cout<<"while:"<<i<<endl;
        i++;
    }


    for(int j=1;j<=3;j++){
        cout<<"for:"<<j<<endl;
    }

    return 0;
}