class Solution {
public:
    int maxProduct(int n) {

       string ne = to_string(n);
        sort(ne.begin(), ne.end());
        int k = ne.size();
        int x = (ne[k-1])-'0';
        int y = (ne[k-2])-'0';
        return x*y;
    }
};