#include <bits/stdc++.h>
using namespace std;

// int singlerotate(vector<int>& nums){
//     // vector<int> temp;
//     int n=nums.size();
//     int first=nums[0];
//     for(int i=1;i<n;i++){
//         nums[i-1]=nums[i];
//     }
//     nums[n-1]=first;
//     for(int i=0;i<n;i++){
//         cout<<nums[i]<<" ";
//     }
//     cout<<endl;

// }

int k_rotate(vector<int>& nums){
    int n = nums.size();
    int k;
    cout<<"enter the number : ";
    cin>>k;
    vector<int> temp;
    for(int i=k;i<n;i++){
        temp.push_back(nums[i]);
    }
    for(int i=0;i<k;i++){
        temp.push_back(nums[i]);
    }
    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
    cout<<endl;


}

int main(){
    vector<int>nums={1,1,2,2,5};
    // singlerotate(nums);
    k_rotate(nums);

}