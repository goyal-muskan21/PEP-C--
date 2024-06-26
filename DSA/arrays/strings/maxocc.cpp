#include <bits/stdc++.h>
using namespace std;

void maxOccurance(string str) {
    
  int count[256] = {0};
  char max_char;
  int max_count = 0;

  for (int i = 0; i < str.length(); i++) {
    count[str[i]]++;
  }

  for (int i = 0; i < 256; i++) {
    if (count[i] > max_count) {
      max_count = count[i];
      max_char = i;
    }
  }

  cout << "The maximum occurring character is: " << max_char << endl;
  cout << "The maximum occurrence is: " << max_count << endl;
}

void removeSpace(string str) {
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == ' ') {
            str.replace(i, 1, "@9");
        }
    }

    cout << str << endl;
}

int main() {
    string str = "hello world";
    removeSpace(str);
    maxOccurance(str);

    return 0;
}