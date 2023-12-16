class Solution {
public:
    int maxDepth(string s) {
        int depth=0;
        int open=0;
        for(auto ch:s){
            if(ch=='('){
                open++;
            }
            else if(ch==')'){
                open--;
            }
            depth=max(depth,open);
        }
        return depth;
    }
};