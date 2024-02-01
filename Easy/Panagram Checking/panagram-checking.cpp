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
        remove(s.begin(),s.end(),' ');
        if(s.size()<26 )
        {
            return false;
        }
        map<char,int>mp;
        int i;
        for(i=0;i<s.size();i++)
        {
            if(isalpha(s[i]))
            {
                    if(int(s[i])>=97)
                    {
                     mp[s[i]]+=1;   
                    }
                    else
                    {
                    mp[char(int(s[i])+32)]+=1;
                        
                    }
            }
        }
       // cout<<mp.size();
        if(mp.size()<26)
        {
            return false;
        }else
        {
            return true;
        }
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