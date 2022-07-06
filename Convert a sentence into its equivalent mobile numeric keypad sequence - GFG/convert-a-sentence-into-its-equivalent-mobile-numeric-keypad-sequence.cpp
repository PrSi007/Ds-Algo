// { Driver Code Starts
// C++ implementation to convert a
// sentence into its equivalent
// mobile numeric keypad sequence
#include <bits/stdc++.h>
using namespace std;
string printSequence(string input);
// Driver function
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
    {
        string s;
        getline(cin,s);
        cout<<printSequence(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends


string printSequence(string S)
{
    int i,temp;
    string na="";
    for(i=0;i<S.length();i++)
    {
        if(S[i]==' ')
            na+="0";
        if(S[i]>='A'&&S[i]<='O')
        {
            temp=S[i]-'A';
            temp=temp/3;
            temp=2+temp;
            for(int j=0;j<=(S[i]-'A')%3;j++)
                na+=to_string(temp);
        }
        if(S[i]>='P'&&S[i]<='S')
        {
            for(int j=0;j<=(S[i]-'P')%4;j++)
                na+="7";
        }
        if(S[i]>='T'&&S[i]<='V')
        {
            for(int j=0;j<=(S[i]-'T')%3;j++)
                na+="8";
        }
        if(S[i]>='W'&&S[i]<='Z')
        {
            for(int j=0;j<=(S[i]-'W')%4;j++)
                na+="9";
        }
    }
    
    return na;
}