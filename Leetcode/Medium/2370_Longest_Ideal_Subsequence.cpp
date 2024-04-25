class Solution {
public:
    int longestIdealString(string s, int k) {
        int res=0,n=s.size();
        int ans[26];
        for(int i=0; i<26; i++)ans[i]=0;
        for(int i=0; i<n; i++){
            int x=s[i]-'a',y=0;
            for(int j=max(0,x-k); j<=min(25,x+k); j++){
                y=max(ans[j],y);
            }
            ans[x]=y+1;
        }
        for(int i=0; i<26; i++)res=max(res,ans[i]);
        return res;
    }
};
