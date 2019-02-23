#include<iostream>
using namespace std;

int main(){

    float a = 2.2000;
    float b = 2.2000;

    if(("%.2f",a) == ("%.2f",b)){

        float c = ("%.2f",a);
        cout<<"yes %f ",c;

    }else{
        cout<<"no";
    }

    return 0;
}
