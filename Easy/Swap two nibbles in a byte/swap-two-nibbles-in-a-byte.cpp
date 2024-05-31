//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int swapNibbles(int n) {
        // code here
        uint8_t lower_nibble = n & 0x0F; // Extract lower nibble
        uint8_t upper_nibble = n & 0xF0; // Extract upper nibble
        lower_nibble <<= 4;
    
        upper_nibble >>= 4;
    
        uint8_t result = lower_nibble | upper_nibble;
    
        return result;
        }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.swapNibbles(n) << endl;
    }
    return 0;
}
// } Driver Code Ends