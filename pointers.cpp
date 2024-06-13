//variable storing the address of the variable its pointing to
//pointer should have the same datatype as the variable its going to point
//dereferencing a pointer means that the address of the variable that pointer is pointing to is now pointing to the value of the variable by same *
//double pointer -- pointer pointing towards a pointer

#include<bits/stdc++.h>
using namespace std;

int main() {
    int var = 5;
    int *ptr = &var; //ptr pointed to var address

    int *ptr1 = NULL;
    
    int **ptr2 = &ptr; //ptr2 pointing and storing ptr address 

    cout<< var << endl; // value of var
    cout<<&var<<endl; //address of var
    cout<<ptr<<endl; //address of var
    cout<<*ptr<<endl; //dereferenced pointer showing value of var
    cout<<&ptr<<endl; //address of pointer
    cout<<ptr2<<endl; //double pointer pointing tp ptr address
    cout<<*ptr2<<endl; //ptr address
    cout<<**ptr2<<endl; //ptr value or value of var
}

//types of pointers
// null pointers -- if we dont have a memory to point from pointer then the pointer points to null
// dangling pointers -- when we delete the address pointer was pointing to so it is now a dangling pointer
//pointer dangling to NULL so it doesnot take memory space more
// void pointers -- not restricted to anny datatype but to dereference it is tough we need to change datatype according to its value
// wild value -- an uninitialised pointer

