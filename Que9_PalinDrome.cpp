class Solution {
public:
    bool isPalindrome(long x) {
        if(x<0){
            return false;
        }
        long org=x;
        long revs=0;
        while(x !=0){
            long digit = x % 10;
            revs = revs * 10 + digit;
            x/=10;
        }
        if(org==revs)
        return true;
        else
        return false;
    }
};