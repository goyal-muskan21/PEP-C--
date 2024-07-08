#include <iostream>
#include <vector>

using namespace std;

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        int candidate = 0;
        
        // Check if the candidate knows anyone
        for (int i = 0; i < n; i++) {
            if (M[candidate][i] == 1) {
                // The candidate knows someone, so he cannot be a celebrity
                candidate = i;
            }
        }
        
        // Check if everyone knows the candidate
        for (int i = 0; i < n; i++) {
            if (i != candidate && (M[i][candidate] == 0 || M[candidate][i] == 1)) {
                // Someone doesn't know the candidate or the candidate knows someone
                return -1; // No celebrity found
            }
        }
        
        // The candidate is the celebrity
        return candidate;
    }
};

int main() {
    int t;
    cin>>t;
    while(t--)
    {
     int n;
     cin>>n;
     vector<vector<int> > M(n, vector<int>(n, 0));
     for(int i=0;i<n;i++)
     {
          for(int j=0;j<n;j++)
          {
               cin>>M[i][j];
          }
     }
     Solution ob;
     cout<<ob.celebrity(M,n)<<endl;
    }
}