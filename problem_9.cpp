class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        else if(x==0) return true;
        else{
            int ansmatrix[10]={10,10,10,10,10,10,10,10,10,10};
            int temp=x,count=0;
            while(temp>0){
                ansmatrix[count]=temp%10;
                temp/=10;
                count++;
            }
            count--;
            int mid=count/2;
            for(int i=0;i<=mid;i++){
                if(ansmatrix[i]!=ansmatrix[count-i]) return false;
                else if(ansmatrix[i]==ansmatrix[count-i] && i==mid) return true;
            }
        }
        return false;
    }
};
