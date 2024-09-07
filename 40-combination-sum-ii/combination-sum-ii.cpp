class Solution {
public:
    void helper(vector<int>& arr, int target,int sum,int ind,vector<vector<int>>&res,vector<int>&ds){
        if (sum > target) return; // Early termination if sum exceeds target

            if(sum==target){
                res.push_back(ds);
                return;
            }

        for(int i=ind;i<arr.size();i++){
            if(i>ind&&arr[i-1]==arr[i]) continue;
            sum+=arr[i];
            ds.push_back(arr[i]);
            helper(arr,target,sum,i+1,res,ds);
            sum-=arr[i];
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> ds;
        sort(candidates.begin(),candidates.end());
        helper(candidates,target,0,0,res,ds);
        return res;
    }
};