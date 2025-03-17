class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        for(int i=0;i<asteroids.size();i++){
            bool c=true;
            while(!st.empty()&&asteroids[i]<0&&st.top()>0){
                if(st.top()<-asteroids[i]){
                    st.pop();
                    continue;
                }
                else if(st.top()==-asteroids[i]){
                    st.pop();
                }
                c=false;
                break;
            }
            if(c)
            st.push(asteroids[i]);
        }
        vector<int>rel(st.size());
        for(int i=st.size()-1;i>=0;i--){
            rel[i]=st.top();
            st.pop();
        }
        return rel;
    }
};