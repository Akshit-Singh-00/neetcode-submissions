class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        unordered_map<int, int> mp;

        mp[0] = 1;

        int sum = 0;
        int count = 0;

        for (int x : nums) {

            sum += x;

            int remove = sum - k;

            if (mp.find(remove) != mp.end()) {
                count += mp[remove];
            }

            mp[sum]++;
        }

        return count;
    }
};