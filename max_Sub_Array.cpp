
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=INT_MIN, sum=0;
        for(int i=0;i<nums.size();++i){
            sum+=nums[i];
            maxi= max(sum, maxi);
            if(sum<0)
                sum=0;
        }
        return maxi;
    }
};

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    

Solution s;
cout<<s.maxSubArray(v);

}
