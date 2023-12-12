// here we have to find just Given the array of integers nums, you will choose two different indices i and j of that array. Return the maximum value of (nums[i]-1)*(nums[j]-1).
#include <bits/stdc++.h>
using namespace std;
int maxiPro(int n,vector<int>&vec){
    int ans=0;
    for(int i=0;i<vec.size(); i++) {
            for (int j=i+1;j<vec.size();j++) {
            ans=max(ans,(vec[i]-1)*(vec[j]-1));  
            }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> vec;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        vec.push_back(x);
    }
    cout<<maxiPro(n,vec)<<endl;
}
