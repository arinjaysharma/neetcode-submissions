class TimeMap {
        unordered_map<string ,vector<pair<int, string>>> mp ;
        int timestamp_prev;  

public:
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mp[key].push_back({timestamp, value});
 
        
    }
    
    string get(string key, int timestamp) {
         // Check if key exists
        if (mp.find(key) == mp.end()) {
            return "";
        }
        
        // First pass: look for exact match
        for (auto m : mp[key]) {
            if (m.first == timestamp) {
                return m.second;
            }
        }
        
        // Second pass: find the largest timestamp <= requested timestamp
        int max_timestamp = -1;
        for (auto m : mp[key]) {
            if (m.first < timestamp && m.first > max_timestamp) {
                max_timestamp = m.first;
            }
        }
        
        // Third pass: return the value for that max timestamp
        if (max_timestamp != -1) {
            for (auto m : mp[key]) {
                if (m.first == max_timestamp) {
                    return m.second;
                }
            }
        }
        
        return "";
    }
};
