class Solution {
public:
    string addBinary(string a, string b) {
        int min_len = (a.length() > b.length())? b.length():a.length();
        int max_len = (a.length() > b.length())? a.length():b.length();
        string a_new = string(a.rbegin(),a.rend());
        string b_new = string(b.rbegin(),b.rend());
        string min_str = (a.length() > b.length())? b_new : a_new;
        string max_str = (a.length() > b.length())? a_new : b_new;
        int count = 0;
        string result = "";
        for(int i = 0;i< max_len;i++){
            if(i<min_len){
                if(min_str[i] == '1' && max_str[i] == '1'){
                    if(count) result += '1';
                    else result += '0';
                    count = 1;
                    
                }
                else if(min_str[i] == '0' && max_str[i] == '0'){
                    if(count) result += '1';
                    else result += '0';
                    count = 0;
                }
                else{
                    if(count){
                        result += '0';
                        count = 1;
                    } 
                    else{
                        result += '1';
                        count = 0;
                    } 
                }
                
            }
            else{
                if(count == 1 && max_str[i] == '1'){
                    result += '0';
                    count = 1;
                }
                else if(count == 1 && max_str[i] == '0'){
                    result += '1';
                    count = 0;
                }
                else if(count == 0 && max_str[i] == '1'){
                    result += '1';
                    count = 0;
                }
                else if(count == 0 && max_str[i] == '0'){
                    result += '0';
                    count = 0;
                }
            }
        }
        if(count) result += '1';
        result = string(result.rbegin(),result.rend());
        return result;
    }
};
