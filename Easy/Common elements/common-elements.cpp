//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            // set<int> s1;
            // set<int> s2;
            // set<int> s3;
            // for(int i=0; i<n1; ++i) {
            //     s1.insert(A[i]);
            // }
            // for(int i=0; i<n2; ++i) {
            //     s2.insert(B[i]);
            // }
            // for(int i=0; i<n3; ++i) {
            //     s3.insert(C[i]);
            // }
            
        //      map<int,int> mp;
            
        //   for(int i=0;i<n1;i++)
        //   {
        //          mp[]
        //   }
        //     for(auto it: B){
        //         mp[it]++;
        //     }
        //     for(auto it: C){
        //         mp[it]++;
        //     }
            
        //     for(auto it: mp){
        //         if(it.second == 3){
        //             cout<<it.first<<" ";
        //         }
        //     }
            
            set<int> com1;
            int i=0,j=0;
            while(i<n1 && j<n2){
                if(A[i]==B[j]){
                    com1.insert(A[i]);
                    i++;
                    j++;
                }else if(A[i]<B[j]){
                    i++;
                }else{
                    j++;
                }
            }
            
            i=0;
            j=0;
            
            set<int> ans;
            for(int i=0;i<n3;i++){
                if(com1.count(C[i])>0){
                    ans.insert(C[i]);
                    com1.erase(C[i]);
                }
            }
            
            vector<int> ansv;
            for(auto it:ans){
                ansv.push_back(it);
            }
            
            return ansv;
        }

};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}
// } Driver Code Ends