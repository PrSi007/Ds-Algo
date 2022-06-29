// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 

 // } Driver Code Ends
class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& a,int n, int P)
    { 
        int i;
        for(i=0;i<n;i++)
        {
            a[i]--;
            a.push_back(0);
        }
        
        for(i=0;i<n;i++)
        {
            if(a[i]<n)
                a[n+a[i]]++;
        }
        
        for(i=0;i<n;i++)
            a[i]=a[n+i];
        
        for(i=0;i<n;i++)
        a.pop_back();
        
    }
};


// { Driver Code Starts.

int main() 
{ 
	long long t;
	
	//testcases
	cin >> t;
	
	while(t--){
	    
	    int N, P;
	    //size of array
	    cin >> N; 
	    
	    vector<int> arr(N);
	    
	    //adding elements to the vector
	    for(int i = 0; i < N ; i++){
	        cin >> arr[i]; 
	    }
        cin >> P;
        Solution ob;
        //calling frequncycount() function
		ob.frequencyCount(arr, N, P); 
		
		//printing array elements
	    for (int i = 0; i < N ; i++) 
			cout << arr[i] << " ";
	    cout << endl;
	}	
	return 0; 
}




  // } Driver Code Ends