class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minheap;

        for (int x : nums) {
            count[x] += 1;
        }

        for (auto& [value, freq] : count) {
            minheap.push({freq, value});
            if (minheap.size() > k) {
                minheap.pop();
            }
        }

        vector<int> result;

        while (!minheap.empty()) {
            result.push_back(minheap.top().second);
            minheap.pop();
        }
        return result;
    }
};
