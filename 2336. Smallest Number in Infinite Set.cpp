class SmallestInfiniteSet {
private:
    int current = 1;
    unordered_set<int> s;
    priority_queue<int, vector<int>, greater<int>> pq;
public:
    SmallestInfiniteSet() {

    }
    
    int popSmallest() {
        if (!pq.empty()) {
            int top = pq.top();
            pq.pop();
            s.erase(top);
            return top;
        }
        return current++;
    }
    
    void addBack(int num) {
        if (num < current && !s.count(num)) {
            pq.push(num);
            s.insert(num);
        }
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */
