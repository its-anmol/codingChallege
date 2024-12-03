class Solution {
public:
    int numTrees(int n) {
    vector<int> uniqueTree(n + 1, 1);

    for (int nodes = 2; nodes <= n; nodes++) {
        int total = 0;

        for (int root = 1; root <= nodes; root++) {
            total += uniqueTree[root - 1] * uniqueTree[nodes - root];
        }

        uniqueTree[nodes] = total;
    }
    return uniqueTree[n];
}

};