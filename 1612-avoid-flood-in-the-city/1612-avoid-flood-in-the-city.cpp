class Solution {
public:
    vector<int> avoidFlood(vector<int>& rains) {
        int n = rains.size();
        vector<int> result(n, 1);
        set<int> sunnyDays;
        unordered_map<int, int> rainyDays;

        for(int i = 0; i < n;i ++){
            int day = rains[i];
            if(rainyDays.count(day)){
                auto it = sunnyDays.upper_bound(rainyDays[day]);
                if (it == sunnyDays.end()) {
                    return {};
                }
                result[*it] = day;
        
                sunnyDays.erase(it);
                rainyDays[day] = i;
                result[i] = -1;

                continue;
            }
            if(day == 0) sunnyDays.insert(i);
            else{
                rainyDays[day] = i;
                result[i] = -1;
            }
            
        }

        return result;
    }
};