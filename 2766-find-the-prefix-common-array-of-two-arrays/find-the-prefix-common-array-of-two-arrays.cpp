class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        unordered_map<int,int> mpp;
        vector<int> ans(n,0);
        int count = 0;
        if(A[0]==B[0]){
            count++;
            ans[0]=count;
        }
        mpp[A[0]]++;
        mpp[B[0]]++;
        for(int i=1; i<n; i++){
            if(A[i]==B[i]) count++;
            else {
                if(mpp.find(A[i])!=mpp.end()) count++;
                if(mpp.find(B[i])!=mpp.end()) count++;
            }
            ans[i]=count;
            mpp[A[i]]++;
            mpp[B[i]]++;
        }
        return ans;

    }
};