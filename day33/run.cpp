class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        
        while(true){

            auto it = find(nums.begin(), nums.end(), original);

            if(it != nums.end()){
                original *= 2;
            } else{
                break;
            }
        }
        return original;
    }
};