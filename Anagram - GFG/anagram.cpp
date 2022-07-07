// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    const int CHAR = 256;
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        int check[CHAR]={0},i;
        for(i=0;i<a.length();i++)
            check[a[i]]++;
        
        for(i=0;i<b.length();i++)
            check[b[i]]--;
            
        for(i=0;i<CHAR;i++)
        {
            if(check[i]!=0)
                return false;
        }
        
        return true;
    }

};

// { Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}
  // } Driver Code Ends