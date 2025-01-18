
#include <iostream>
using namespace std;
//naive approach
 int sum(vector<int>& nums){
    int sum =0;
    for(int i=0;i<nums.size();i++){
        sum += nums[i];
    }
    return sum;
}

//recusive approach
int sumRecursive(vector<int> &nums,int i){
    if(nums.size()==i){
        return 0;
    }
    return nums[i] + sumRecursivce(nums,i+1);
    
}

//using in-built functions
int sumInBuilt(vector<int> &nums){
    return accumulate(nums.begin(), nums.end(), 0); 
    
}
int main() {
   
    vector<int> numbers = {11, 17, 33, 14, 25};

    // Naive Approach
    int sumNaive = sum(nums);
    cout << sumNaive << endl;

    // Recursive Approach
    int sumrecursive = SumRecursive(numbers, 0);
    cout << sumRecursive << endl;

    // Using Built-in Function
    int sumBuiltIn = SumInBuilt(nums);
    cout  << sumBuiltIn << endl;

    return 0;
}
