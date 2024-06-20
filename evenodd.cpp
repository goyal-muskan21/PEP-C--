#include<bits/stdc++.h>
using namespace std;

void sum(int nums){ 
    int even_sum = 0;
    int odd_sum = 0;
    for(int i=1; i<=nums; i++){
        if(i % 2 == 0){
                even_sum += i;
            }
        else{
            odd_sum += i;
        }
    }
    cout<<odd_sum<<" "<<even_sum;
}

int main() { 
    int t;
    cin>>t;
     int nums;
    while(t-->0){ 
        cin>>nums;
       sum(nums); 
       
    }
    
}