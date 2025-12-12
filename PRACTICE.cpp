#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>
using namespace std;
vector<int> subarraySum(vector<int>& nums) {
    vector<int> pre;
    int sum = 0;
    for(int i=0;i<nums.size();i++){
        sum = sum + nums[i];
        pre.push_back(sum);
    }
    return pre;
}
int main(){
    vector<int> nums;
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(2);
    nums.push_back(8);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(7);
    cout<<nums.size();
    cout<<endl;
    vector<int> v = subarraySum(nums);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.size();

    
}