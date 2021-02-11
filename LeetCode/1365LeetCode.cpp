#include <vector>
class Solution {
public:
    int i = 0;
    int y = 0;
    int counter=0;
    vector<int> output;
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        //d::cout<<nums[1];
        for(i=0;i < nums.size();i++){
            int counter =0;
            for(y=0; y <nums.size();y++){
                if(nums[i]>nums[y]){
                    counter++;
                }
            }output.push_back(counter);
        }
        
    return output;}
};