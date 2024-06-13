//variable storing the address of the variable its pointing to
//pointer should have the same datatype as the variable its going to point
//dereferencing a pointer means that the address of the variable that pointer is pointing to is now pointing to the value of the variable by same *
//double pointer -- pointer pointing towards a pointer

#include<bits/stdc++.h>
using namespace std;

int main() {
    int var = 5;
    int *ptr = &var; //ptr pointed to var address
    
    int **ptr2 = &ptr;

    cout<< var << endl; // value of var
    cout<<&var<<endl; //address of var
    cout<<ptr<<endl; //address of var
    cout<<*ptr<<endl; //dereferenced pointer showing value of var
    cout<<&ptr<<endl; //address of pointer
    cout<<ptr2<<endl; //double pointer pointing tp ptr address
    cout<<*ptr2<<endl; //ptr address
    cout<<**ptr2<<endl; //ptr value or value of var
}

