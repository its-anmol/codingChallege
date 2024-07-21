class Solution {
public:
    int minimumOperations(vector<int>& nums, int start, int goal) {
        queue<int>q;
        q.push(start);
        int res=0;
        vector<bool> vis(1001,false);
        while(!q.empty()){
            int s=q.size();
            while(s--){
                int x=q.front();
                q.pop();
                if(x==goal) return res;
                if(x<0||x>1000||vis[x]==true) continue;
                vis[x]=true;
                for(int i=0;i<nums.size();i++){
                    int a=x+nums[i];
                    int b=x-nums[i];
                    int c=x^nums[i];
                    q.push(a);
                    q.push(b);
                    q.push(c);
                }
            }
            res++;
        }
        return -1;
    }
};