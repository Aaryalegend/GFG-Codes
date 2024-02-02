//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        int n=0;
        int index;
        if(s[0]=='-') {
            for(int i=1; i < s.size(); ++i) {
                index = s[i] - '0';
                if(index >= 0 && index <=9) {
                    n = n * 10 + index;
                } else {
                    return -1;
                }
            }
            n = n * (-1);
            return n;
        } else {
            for(int i=0; i < s.size(); ++i) {
                index = s[i] - '0';
                if(index >= 0 && index <=9) {
                    n = n * 10 + index;
                } else {
                    return -1;
                }
            }
            return n;
        }
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends