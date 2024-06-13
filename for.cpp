#include <iostream>
using namespace std;

// int main(){
//     for(int i=0; i<=10; i++){
//         if( i == 5 ) {
//             break;
//         }
//         cout<<i<<endl;
//     }
// }


// (condition) ? expression1 : expression2 --> ternary operator

// int main(){
//     int marks;
//     cout<< "marks:";
//     cin>>marks;

//     string result = (marks >= 40) ? "pass" : "fail";
//     cout<<result;
// }

int main() {
    int num = -3;
    string result = (num == 0) ? "Zero" : (num > 0) ? "Positive" : "Negative";
    cout<<result;
}
