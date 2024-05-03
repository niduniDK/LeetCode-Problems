class Solution {
public:
    int reverse(int x) {
        long value = 0;
        int length = to_string(x).size()-1;
        if(x<0) length--;

        int count = length;
        while(x!=0){
            if(x%10==0 && count==length){
                x /= 10;
                count--;
                continue;
            }
            else{
                int curr = x % 10;
                value += (long)(pow(10, count)) * curr;
                count--;
                x /= 10;
            }
        }
        if(value > pow(2,31)-1 || value< -pow(2, 31)) return 0;
        return value;
    }
};
