class Solution {
public:
    string addStr(string s,int a){
        for(int i=1;i<s.size();i+=2){
            s[i]='0'+(s[i]-'0'+a)%10;
        }
        return s;
    }
    string rotateStr(string s,int n){
        int size=s.size();
        n%=size;
        return s.substr(size-n)+s.substr(0,size-n);
    }
    void dfs(string s,int a,int b,unordered_set<string>& seen,string& ans){
        if(seen.count(s))
        return ;
        ans=min(s,ans);
        seen.insert(s);
        dfs(rotateStr(s,b),a,b,seen,ans);
        dfs(addStr(s,a),a,b,seen,ans);
    }
    string findLexSmallestString(string s, int a, int b) {
        string ans=s;
        unordered_set<string> seen;
        dfs(s,a,b,seen,ans);
        return ans;
    }
};