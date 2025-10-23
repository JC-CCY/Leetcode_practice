class Solution {
public:
    int romanToInt(string s) {
        int num[4]={0,0,0,0};
        for(int i=0;i<s.length();i++){
            if(s[i]!='I'&&s[i]!='X'&&s[i]!='C'){
                if(s[i]=='V') num[0]+=5;
                else if(s[i]=='L') num[1]+=5;
                else if(s[i]=='D') num[2]+=5;
                else num[3]++;
            }
            else if(s[i]=='I'){
                if(i+1<s.length()){
                    if(s[i+1]!='V'&&s[i+1]!='X') num[0]++;
                    else if(s[i+1]=='V'){
                        num[0]+=4;
                        i++;
                    } 
                    else{
                        num[0]+=9;
                        i++;
                    } 
                }
                else num[0]++;
            }
            else if(s[i]=='X'){
                if(i+1<s.length()){
                    if(s[i+1]!='L'&&s[i+1]!='C') num[1]++;
                    else if(s[i+1]=='L'){
                        num[1]+=4;
                        i++;
                    } 
                    else{
                        num[1]+=9;
                        i++;
                    } 
                }
                else num[1]++;
            }
            else{
                if(i+1<s.length()){
                    if(s[i+1]!='D'&&s[i+1]!='M') num[2]++;
                    else if(s[i+1]=='D'){
                        num[2]+=4;
                        i++;
                    } 
                    else{
                        num[2]+=9;
                        i++;
                    } 
                }
                else num[2]++;
            }
        }
        int ans=0;
        for(int j=3;j>=0;j--){
            ans+=num[j]*pow(10,j);
        }
        return ans;
    }
};
