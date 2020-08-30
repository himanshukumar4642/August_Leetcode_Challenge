class Solution {
public:
    int parent[121000], size[121000];

    int largestComponentSize(vector<int>& A) {
        for (int i = 0; i < 121000; i++) parent[i] = i;
        memset(size, 0, sizeof(size));

        for (int i = 0; i < A.size(); i++) {
            size[100001 + i] = 1;
            for (int p = 2; p*p <= A[i]; p++) {
                if (A[i] % p == 0) {
                    merge(p, 100001+i);
                    merge(A[i]/p, 100001+i);
                }
            }
            merge(A[i], 100001+i);
        }

        int max_cc = 1;
        for (int i = 0; i < A.size(); i++)
            max_cc = max(max_cc, size[find(100001+i)]);
        return max_cc;
    }

    int find(int i) {
        if (parent[i] != i) parent[i] = find(parent[i]);
        return parent[i];
    }

    void merge(int i, int j) {
        i = find(i);
        j = find(j);
        if (i == j) return;
        size[i] += size[j];
        parent[j] = i;
    }
};
