// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int a[], int d, int n){
        int i,temp;
        if(d>n)
            d=d-n;
            
        for(i=0;i<n/2;i++)
        {
            temp=a[i];
            a[i]=a[n-1-i];
            a[n-1-i]=temp;
        }
        
        for(i=0;i<(n-d)/2;i++)
        {
            temp=a[i];
            a[i]=a[n-d-1-i];
            a[n-d-1-i]=temp;
        }
        
        int j=n-d;
        for(i=1;i<=d/2;i++)
        {
            temp=a[j];
            a[j]=a[n-i];
            a[n-i]=temp;
            j++;
        }
    }

};

// { Driver Code Starts.

int main() {
	int t;
	//taking testcases
	cin >> t;
	
	while(t--){
	    int n, d;
	    
	    //input n and d
	    cin >> n >> d;
	    
	    int arr[n];
	    
	    //inserting elements in the array
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    //calling rotateArr() function
	    ob.rotateArr(arr, d,n);
	    
	    //printing the elements of the array
	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}  // } Driver Code Ends