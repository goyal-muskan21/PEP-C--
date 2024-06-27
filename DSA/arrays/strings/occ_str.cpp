// remove all occurences of substring in a string 
// s = daabcbaabcbc
// part = abc
// output : dab

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeOccurrences(string s, string part) {
        size_t pos;
        while ((pos = s.find(part)) != string::npos) {
            s.erase(pos, part.length());
        }
        return s;
    }
};

int main() {
    Solution s1;
    string s = "daabcbaabcbc";
    string part = "abc";
    cout << s1.removeOccurrences(s, part);
}

//daabcbaabcbc