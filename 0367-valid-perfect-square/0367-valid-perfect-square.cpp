class Solution {
public:
    bool isPerfectSquare(int num) {
       

        long long int low = 0;
        long long int high = num;

        while(low <= high)
        {
            // find the mid

            long long int mid = low + (high - low)/2;

            long long int pro = mid * mid;
            if(pro == num)
                return true;
            else if(pro > num)
                high = mid - 1;
            else
                low = mid + 1;        
        }
        return false;
    }
};  