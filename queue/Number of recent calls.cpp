class RecentCounter {
public:
    RecentCounter() {
    }
 
    int ping(int t) {
        time.push(t);
        while (time.front() < t - 3000) {
            time.pop();
        }
        return time.size();
    }
private:
    queue<int> time;
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
