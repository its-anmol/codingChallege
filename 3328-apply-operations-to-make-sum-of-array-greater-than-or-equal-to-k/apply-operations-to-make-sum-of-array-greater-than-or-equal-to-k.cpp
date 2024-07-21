class Solution {
public:
    int minOperations(int k) {
        if(k==1) return 0;
        int op=INT_MAX;
        for(int a=0;a<k;a++){
            int b=ceil((k*1.0)/(a+1))-1;
            op=min(op,a+b);
        }
        return op;
    }
};