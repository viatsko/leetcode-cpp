class DisjointUnionSets {
    vector<int> rank, parent;

public:
  
    // Constructor to initialize sets
    DisjointUnionSets(int n) {
        rank.resize(n, 0);
        parent.resize(n);

        // Initially, each element is in its own set
        iota(parent.begin(), parent.end(), 0);
    }

    // Find the representative of the set that x belongs to
    int find(int i) {
        int root = parent[i];
      
        // Path Compression
        if (parent[root] != root) {
            return parent[i] = find(root);
        }
      
        return root;
    }

    // Union of sets containing x and y
    void unionSets(int x, int y) {
        int xRoot = find(x);
        int yRoot = find(y);

        // If they are in the same set, no need to union
        if (xRoot == yRoot) return;

        // Union by rank
        if (rank[xRoot] < rank[yRoot]) {
            parent[xRoot] = yRoot;
        } else if (rank[yRoot] < rank[xRoot]) {
            parent[yRoot] = xRoot;
        } else {
            parent[yRoot] = xRoot;
            rank[xRoot]++;
        }
    }
};

class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        DisjointUnionSets* sets = new DisjointUnionSets(isConnected.size());

        for (int i = 0; i < isConnected.size(); i++) {
            for (int j = i + 1; j < isConnected.size(); j++) {
                if (isConnected[i][j]) {
                    sets->unionSets(i, j);
                }
            }
        }

        int result = 0;

        for (int i = 0; i < isConnected.size(); i++) {
            if (sets->find(i) == i) {
                result++;
            }
        }

        return result;
    }
};
