class Solution {
public:
    string longestPalindrome(string s) {
        string ans,ans2;
        ans2+=s[0];
        char temp;
        int curlen=1;
        for(int a=0;a<s.length()-curlen;a++){
            temp=s[a];
            for(int i=a+1;i<s.length();i++){
                if(temp==s[i]){
                    if(i-a+1>curlen){
                        int middle=(i+a)/2;
                        int count=0;
                        int flag=1;
                        for(int j=a;j<=middle;j++){
                            if(s[j]!=s[i-count]){
                                flag=0;
                                break;
                            } 
                            else count++;
                        }
                        if(flag){
                            curlen=i-a+1;
                            ans="";
                            for(int k=a;k<=i;k++){
                                ans+=s[k];
                            }
                        }
                    }
                }
            }
        }
        if(curlen!=1) return ans;
        else return ans2;
    }
};
