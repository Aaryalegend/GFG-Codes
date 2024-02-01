//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        // your code here
        set<int> sett;
        int index;
        for(int i=0; i<s.size(); ++i) {
            if(s[i] >= 'a' && s[i] <= 'z') {
                index = s[i] - 'a';
                if(index >= 0) {
                    sett.insert(index);
                }
            } else {
                index = s[i] - 'A';
                if(index >= 0) {
                    sett.insert(index);
                }
            }
        }
        // Checking whether the string is pangram or not by comparing size of set and alphabet
        if(sett.size() != 26) return false;
        return true;
    }

};

//{ Driver Code Starts.

// Driver Program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--){
        string s;
        getline(cin, s);
        Solution obj;
        if (obj.checkPangram(s) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return(0);
}

// } Driver Code Ends