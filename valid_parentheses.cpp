class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='(' || s[i]=='[' ||s[i]=='{'){
                st.push(s[i]);
            }
            else{
                if(st.empty()){
                    return false;
                }
                char t1=st.top(); 
                st.pop();
                if((s[i]==')' && t1!='(')||
                  (s[i]==']'&& t1!='[')||
                  (s[i]=='}'&& t1!='{') ){
                    return false ;
                }
                
            }
        }
        return st.empty();

    }      
    
};
