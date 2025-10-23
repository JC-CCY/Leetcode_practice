class Solution {
public:
    string intToRoman(int num) {
        int nums[4]={0,0,0,0};
        int temp=num,count=0;
        string ans;
        while(temp>0){
            nums[count]=temp%10;
            temp/=10;
            count++;
        }
        for(int i=3;i>=0;i--){
            if(nums[i]!=0){
                if(nums[i]!=4 && nums[i]!=9){
                    if(nums[i]<5){
                        for(int j=1;j<=nums[i];j++){
                            if(i==3) ans+='M';
                            else if(i==2) ans+='C';
                            else if(i==1) ans+='X';
                            else ans+='I';
                        }
                    }
                    else{
                        if(i==2) ans+='D';
                        else if(i==1) ans+='L';
                        else ans+='V';
                        for(int j=6;j<=nums[i];j++){
                            if(i==3) ans+='M';
                            else if(i==2) ans+='C';
                            else if(i==1) ans+='X';
                            else ans+='I';
                        }
                    }
                }
                else{
                    if(nums[i]==9){
                        if(i==2) ans+="CM";
                        else if(i==1) ans+="XC";
                        else ans+="IX";
                    }
                    else{
                        if(i==2) ans+="CD";
                        else if(i==1) ans+="XL";
                        else ans+="IV";
                    }
                }
            }
        }
        return ans;
    }
};
