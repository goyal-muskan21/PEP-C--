#include<bits/stdc++.h>
using namespace std;

class queueUsingStacks {
     public:
     stack<int> s1, s2;
     queueUsingStacks() {}
     void push(int x) {
          s1.push(x);
     }
     int pop() {
     if (s1.empty()) return -1;
          while (s1.size() > 1) {
               s2.push(s1.top());
               s1.pop();
               }
               int temp = s1.top();
               s1.pop();
     }
     int x =  s2.top();
};

int main() {
     queueUsingStacks q;
     q.push(1);
     q.push(2);
     q.push(3);
     q.push(4);
     cout << q.pop() << endl; // prints 1
     cout << q.pop() << endl; // prints 2
     
}