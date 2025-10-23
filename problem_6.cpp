class Solution {
public:
    string convert(string s, int numRows) {
        char ansmap[1000][1000];
        for(int i=0;i<s.length();i++){
            for(int j=0;j<numRows;j++){
                ansmap[i][j]='0';
            }
        }
        int currow=0,curcol=0,curlen=0;
        while(curlen<s.length()){
            ansmap[curcol][currow]=s[curlen];
            if(numRows==1) return s;
            else if(curcol%(numRows-1)==0){
                if(currow!=(numRows-1)) currow++;
                else{
                    currow--;
                    curcol++;
                }
            }
            else{
                currow--;
                curcol++;
            }
            curlen++;
        }
        string ans;
        for(int i=0;i<numRows;i++){
            for(int j=0;j<s.length();j++){
                if(ansmap[j][i]!='0') ans+=ansmap[j][i];
            }
        }
        return ans;
    }
};
