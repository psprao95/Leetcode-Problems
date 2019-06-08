// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {

        int i=1;
        int j=n;
        int mid;
            while(i<=j)
            {
                mid=(j-i)/2+i;
                if(guess(mid)==0)
                {
                    return mid;
                }
                else if(guess(mid)==1)
                {
                    i=mid+1;
                }
                else
                {
                    j=mid-1;
                }
            }
        return n;
    }
};
