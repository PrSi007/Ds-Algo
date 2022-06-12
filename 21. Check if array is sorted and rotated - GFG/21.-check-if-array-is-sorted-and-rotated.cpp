// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    // arr: input array
    // num: length of array
    // This function returns true or false
    //Function to check if array is sorted and rotated.
    bool checkRotatedAndSorted(int arr[], int n){
        int i,m=INT_MAX,ind,f1=0,f3=0,mn=INT_MIN,d;
        for(i=0;i<n;i++)
        {
            if(arr[i]<m)
                {
                    m=arr[i];
                    ind=i;
                }
            if(arr[i]>mn)
            {
                mn=arr[i];
                d=i;
            }
        }
        
        for(i=ind;i!=ind-1;i=(i+1)%n)
        {
            if(arr[i]>arr[(i+1)%n])
            {
                f1=1;
                break;
            }
        }

        
        if(f1==0&&ind!=0)
            return true;
        
        if(f1==1)
        {
            for(i=d;i!=d-1;i=(i+1)%n)
            {
                if(arr[i]<arr[(i+1)%n])
                {
                    f3=1;
                    break;
                }
            }
            
            if(f3==0&&d!=0)
            return true;
        }
        
        return false;
    }
};

// { Driver Code Starts.

int main()
 {
	int T;
	//testcases
	cin>> T;
	
	while (T--){
	    int num;
	    //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for(int i = 0; i<num; ++i)
            cin>>arr[i];
        
        bool flag = false;
        Solution ob;
        
        //function call
        flag = ob.checkRotatedAndSorted(arr, num);
        
        //printing "No" if not sorted and
        //rotated else "Yes"
        if(!flag){
            cout << "No"<<endl;
        }
        else
        cout << "Yes"<<endl;
    
	}
	
	return 0;
}  // } Driver Code Ends