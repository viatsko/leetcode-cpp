class Node {
public:
    Node* nodes[26];
    bool isComplete = false;

    Node() {
        for (auto &node : nodes) {
            node = nullptr;
        }
    }
};

class Trie {
    Node* root;
public:
    Trie() {
        root = new Node();
    }
    
    void insert(string word) {
        Node* node = root;
        for (auto &ch: word) {
            int idx = ch - 'a';
            if (node->nodes[idx] == nullptr) {
                node->nodes[idx] = new Node();
            }
            node = node->nodes[idx];
        }
        node->isComplete = true;
    }
    
    bool search(string word) {
        Node* node = root;
        for (auto &ch: word) {
            int idx = ch - 'a';
            if (node->nodes[idx] == nullptr) {
                return false;
            }
            node = node->nodes[idx];
        }
        return node->isComplete;
    }
    
    bool startsWith(string prefix) {
        Node* node = root;
        for (auto &ch: prefix) {
            int idx = ch - 'a';
            if (node->nodes[idx] == nullptr) {
                return false;
            }
            node = node->nodes[idx];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
