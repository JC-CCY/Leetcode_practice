class Solution {
public:
    int myAtoi(string s) {
        int intmax=2147483647;
        int intmin=-2147483648;
        int start=0;
        if(s[0]==' '){
            for(int i=1;i<s.length();i++){
                if(s[i]!=' '){
                    start=i;
                    break;
                }
            }
        }
        if(s[start]=='-'){
            int count=start+1;
            while(isdigit(s[count])&&count!=s.length()){
                count++;
            }
            if(count==start+1) return 0;
            string temp;
            for(int i=start+1;i<count;i++){
                temp+=s[i];
            }
            int validstart=0;
            for(int i=0;i<temp.length();i++){
                if(temp[i]=='0') validstart++;
                else break;
            }
            if(validstart==temp.length()) return 0;
            string temp2;
            if(temp.length()-validstart>10) return intmin;
            else{
                for(int j=validstart;j<temp.length();j++){
                    temp2+=temp[j];
                }
                if(temp2.length()<10){
                    int ans=stoi(temp2);
                    return ans*(-1);
                }
                else{
                    string temp3;
                    string temp4;
                    temp4+=temp[9];
                    for(int k=0;k<9;k++){
                        temp3+=temp2[k];
                    }
                    int comp=stoi(temp3);
                    if(comp>214748364) return intmin;
                    else if(comp<214748364){
                        int ans=stoi(temp2);
                        return ans*(-1);
                    }
                    else{
                        int ans=(stoi(temp4)>7)? intmin:stoi(temp2)*(-1);
                        return ans;
                    }
                }
            }
        }
        else if(s[start]=='+'){
            int count=start+1;
            while(isdigit(s[count])&&count!=s.length()){
                count++;
            }
            if(count==start+1) return 0;
            string temp;
            for(int i=start+1;i<count;i++){
                temp+=s[i];
            }
            int validstart=0;
            for(int i=0;i<temp.length();i++){
                if(temp[i]=='0') validstart++;
                else break;
            }
            if(validstart==temp.length()) return 0;
            string temp2;
            if(temp.length()-validstart>10) return intmax;
            else{
                for(int j=validstart;j<temp.length();j++){
                    temp2+=temp[j];
                }
                if(temp2.length()<10){
                    int ans=stoi(temp2);
                    return ans;
                }
                else{
                    string temp3;
                    string temp4;
                    temp4+=temp[9];
                    for(int k=0;k<9;k++){
                        temp3+=temp2[k];
                    }
                    int comp=stoi(temp3);
                    if(comp>214748364) return intmax;
                    else if(comp<214748364){
                        int ans=stoi(temp2);
                        return ans;
                    }
                    else{
                        int ans=(stoi(temp4)>7)? intmax:stoi(temp2);
                        return ans;
                    }
                }
            }
        }
        else if(isdigit(s[start])){
            int count=start;
            while(isdigit(s[count])&&count!=s.length()){
                count++;
            }
            string temp;
            for(int i=start;i<count;i++){
                temp+=s[i];
            }
            int validstart=0;
            for(int i=0;i<temp.length();i++){
                if(temp[i]=='0') validstart++;
                else break;
            }
            if(validstart==temp.length()) return 0;
            string temp2;
            if(temp.length()-validstart>10) return intmax;
            else{
                for(int j=validstart;j<temp.length();j++){
                    temp2+=temp[j];
                }
                if(temp2.length()<10 || temp2[0]=='1'){
                    int ans=stoi(temp2);
                    return ans;
                }
                else{
                    string temp3;
                    string temp4;
                    temp4+=temp[9];
                    for(int k=0;k<9;k++){
                        temp3+=temp2[k];
                    }
                    int comp=stoi(temp3);
                    if(comp>214748364) return intmax;
                    else if(comp<214748364){
                        int ans=stoi(temp2);
                        return ans;
                    }
                    else{
                        int ans=(stoi(temp4)>7)? intmax:stoi(temp2);
                        return ans;
                    }
                }
            }
        }
        else return 0;
    }
};
