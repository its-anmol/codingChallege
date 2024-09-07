class Solution {
public:
    void helper(vector<int>& candidates,int ind, int target,int sum,vector<int> &pc, vector<vector<int>> &res){
        if(ind==candidates.size()){
            if(sum==target){
                res.push_back(pc);
                return;
            }
            return;
        }
        // not pick
        helper(candidates, ind + 1, target, sum, pc, res);
        // pick
        if(sum+candidates[ind]<=target){
            sum += candidates[ind];
            pc.push_back(candidates[ind]);
            helper(candidates, ind, target, sum, pc, res); // allow same candidate to be picked again
            sum -= candidates[ind];
            pc.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> pc;
        helper(candidates,0,target,0,pc,res);
        return res;
    }
};