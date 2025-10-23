class Solution {
public:
    bool isValid(string s) {
        vector<char> temp;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{') temp.push_back(s[i]);
            else{
                if(s[i]==')'){
                    if(temp.empty()) return false;
                    else if(temp.back()=='(') temp.pop_back();
                    else return false;
                }
                else if(s[i]==']'){
                    if(temp.empty()) return false;
                    else if(temp.back()=='[') temp.pop_back();
                    else return false;
                }
                else{
                    if(temp.empty()) return false;
                    else if(temp.back()=='{') temp.pop_back();
                    else return false;
                }
            }
        }
        if(temp.empty()) return true;
        else return false;
    }
};
