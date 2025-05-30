class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int ans = 0;
        for(int i = 0; i < pref.size();i++){
            int l = pref[i];
            pref[i] = ans^pref[i];
            ans = l;
        }        
        return pref;
    }
};