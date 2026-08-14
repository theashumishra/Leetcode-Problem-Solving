class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int n = words.size();
        int ans = 0;
        bool flag = 0;
        unordered_map <string,int> mpp;
        for(auto it: words)
            mpp[it]++;

        for(int i=0; i<n; i++){
            if(words[i][0]!=words[i][1]){
                string rev = "";
                rev+= words[i][1];
                rev+= words[i][0];
                if(mpp.find(rev)!=mpp.end()){
                    int cnt = min(mpp[rev],mpp[words[i]]);
                    ans+= 4*cnt;
                    mpp.erase(rev);
                    mpp.erase(words[i]);
                }
            }
            else {
                int count = mpp[words[i]];
                if(count%2 == 0){
                    ans+=2*count;
                    mpp.erase(words[i]);
                }
                else {
                    if(!flag){
                        ans+=2*count;
                        flag = 1;
                        mpp.erase(words[i]);
                    }
                    else {
                        ans+=2*(count-1);
                        mpp.erase(words[i]);
                    }
                }
            }
        }
        return ans;
    }
};