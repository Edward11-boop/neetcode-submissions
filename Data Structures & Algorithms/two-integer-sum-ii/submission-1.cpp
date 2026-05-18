class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int st = 0 , dr = numbers.size() - 1; 
        while( st <= dr)
        {
            if(numbers[st] + numbers[dr] > target)
                dr--;
            else if(numbers[st] + numbers[dr] < target)
                st++;
            else
            { 
                return {st+1,dr+1};
            }
        }
        return {};
    }
};
