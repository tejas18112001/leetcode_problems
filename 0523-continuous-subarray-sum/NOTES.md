class Solution {
public:
bool checkSubarraySum(vector<int>& nums, int k) {
int n = nums.size() ;
vector<int>p(n) ;
int sum = 0 ;
for(int i = 0 ; i<n ; i++)
{
sum += nums[i] ;
p[i] = sum ;
}
for(int i = 1 ; i<n; i++)
{
if(p[i] % k == 0)
return true ;
}
for(int i = 1 ; i<n ; i++)
{
for(int j = i+1 ; j<n ; j++)
{
if ((p[j] - p[i-1]) % k == 0)
return true ;
}
}
return false;
}
};