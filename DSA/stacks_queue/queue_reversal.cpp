#include <iostream>
#include <queue>
#include <stack>

using namespace std;

// Function to reverse the queue
queue<int> rev(queue<int> q) {
    stack<int> s;
    
    // Step 1: Dequeue all elements from the queue and push them onto the stack
    while (!q.empty()) {
        s.push(q.front());
        q.pop();
    }
    
    // Step 2: Pop all elements from the stack and enqueue them back to the queue
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }
    
    return q;
}

// Utility function to print the queue
void printQueue(queue<int> q) {
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main() {
    // Example 1
    queue<int> q1;
    q1.push(4);
    q1.push(3);
    q1.push(1);
    q1.push(10);
    q1.push(2);
    q1.push(6);
    
    queue<int> result1 = rev(q1);
    printQueue(result1);  // Output: 6 2 10 1 3 4
    
    // Example 2
    queue<int> q2;
    q2.push(4);
    q2.push(3);
    q2.push(2);
    q2.push(1);
    
    queue<int> result2 = rev(q2);
    printQueue(result2);  // Output: 1 2 3 4
    
    return 0;
}
