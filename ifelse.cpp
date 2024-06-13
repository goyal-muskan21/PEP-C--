#include<iostream>
using namespace std;

int main(){
    float m1, m2, m3, m4, m5,sum, per;
    
    cout<<"marks obtained in subjects:";
    cin>>m1>>m2>>m3>>m4>>m5;
    sum = m1+m2+m3+m4+m5;
    cout<<"total marks obtained:"<<sum<<endl;
    per = sum/5;
    cout<<"percentage got"<< per<<endl;

    if(per > 40){
        cout<<"you are pass"<<endl;
    }
    else{
        cout<<"fail";
    }
    return 0;
}