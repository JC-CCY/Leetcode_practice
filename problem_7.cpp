class Solution {
public:
    int reverse(int x) {
        int intmax=2147483647;
        int intmin=-2147483648;
        int ansmatrix[10]={0,0,0,0,0,0,0,0,0,0};
        if(x>0){
            int count=0;
            int temp=x;
            while(temp>0){
                ansmatrix[count]=temp%10;
                temp=temp/10;
                count++;
            }
            long int ans=0;
            for(int i=0;i<count;i++){
                long int scalefactor=pow(10,count-i-1);
                ans+=ansmatrix[i]*scalefactor;
            }
            if(ans>intmax) return 0;
            else return ans;
        }
        else if(x<0){
            int count=0;
            if(x==-2147483648) return 0;
            long int temp=x*(-1);
            while(temp>0){
                ansmatrix[count]=temp%10;
                temp=temp/10;
                count++;
            }
            long int ans=0;
            for(int i=0;i<count;i++){
                long int scalefactor=pow(10,count-i-1);
                ans-=ansmatrix[i]*scalefactor;
            }
            if(ans<intmin) return 0;
            else return ans;
        }
        else return 0;
    }
};
