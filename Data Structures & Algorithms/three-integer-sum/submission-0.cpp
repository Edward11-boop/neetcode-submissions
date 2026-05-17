class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> solutions;

        for(int i = 0 ; i < nums.size() - 2 ; i++)
        {
            for(int j = i + 1 ; j < nums.size() - 1 ; j++)
            {
                for(int k = j + 1 ; k < nums.size() ; k++)
                {
                    if(nums[i] + nums[j] + nums[k] == 0)
                    {
                        vector<int> temp = {nums[i], nums[j], nums[k]};

                        sort(temp.begin(), temp.end());

                        bool exists = false;

                        for(auto v : solutions)
                        {
                            if(v == temp)
                            {
                                exists = true;
                                break;
                            }
                        }

                        if(!exists)
                            solutions.push_back(temp);
                    }
                }
            }
        }

        return solutions;
    }
};