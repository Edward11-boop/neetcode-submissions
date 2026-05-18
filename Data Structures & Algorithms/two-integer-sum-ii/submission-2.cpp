class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int st = 0 , dr = numbers.size() - 1; 

        vector<int> solutions;
        while( st < dr)
        {
            if(numbers[st] + numbers[dr] > target)
                dr--;
            else if(numbers[st] + numbers[dr] < target)
                st++;
            else
            { 
                solutions.push_back({st+1});
                solutions.push_back({dr+1});
                return solutions;
            }
        }
        return solutions;
    }
};
