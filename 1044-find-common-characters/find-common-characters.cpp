class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> ans;
        unordered_map<char,int> mpp;
        for(char ch = 'a'; ch<='z'; ch++)
            mpp[ch]=101;

        for(auto word: words){
            unordered_map<char,int> freq;
            for(auto ch: word){
                freq[ch]++;
            }

            for(char ch = 'a'; ch<='z'; ch++){
                mpp[ch] = min(mpp[ch],freq[ch]);
            }
        }
        for(char ch = 'a'; ch<='z'; ch++){
            while(mpp[ch]>0)
            {     ans.push_back(string(1,ch));
                  mpp[ch]--;
            }
        }
        return ans;

    }
};