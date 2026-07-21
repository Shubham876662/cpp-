#include <bits/stdc++.h>
using namespace std;

int dup(vector<int>& nums){
    set<int>s;
    int n = nums.size();
    for(int i=0;i<n;i++){
        s.insert(nums[i]);
    }
    int k = s.size();
    return k;
}

int remduplicates(vector<int>& nums){
    int n = nums.size();
    int i = 0;
    for(int j=1;j<n;j++){
        if(nums[i]!=nums[j]){
            nums[i+1]=nums[j];
            i+=1;
        }
    }
    cout<<"size of array is "<<i+1<<endl;
    cout<<"new array will be : ";
    for(int k=0;k<n;k++){
        cout<<nums[k]<<" ";
    }
}

int main(){
    vector<int>nums={1,1,2,2,5};
    int op = dup(nums);
    cout<<op<<endl;
    remduplicates(nums);

}