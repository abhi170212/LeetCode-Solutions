class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        // isme hr and min nikal lo 
        // hours ko min me convert krke min ko add kr do 
        // usko array me push kr do 
        // array banne ke baad sort kr do 
        // difference nikalo 
        // 

        vector<int> minutes ;
        for(int i =0;i<timePoints.size();i++){
            int mins = stoi(timePoints[i].substr(3,2)) ;
            int hours = stoi(timePoints[i].substr(0,2));
            int totalMins = hours*60 + mins;
            minutes.push_back(totalMins);
        }
        sort(minutes.begin(),minutes.end());
        // minimum initalise aur minimum ko decide kro 
        int minDiff = INT_MAX ;
        for(int i =0;i<minutes.size()-1;i++){
            int diff = minutes[i+1] - minutes[i] ; // idhar fas gya tha , condition me
            minDiff = min(minDiff,diff);
        }

        // loop wala condition ko handle karo 
        int n = minutes.size()-1;
        int diff_2 =( minutes[0] + (24*60)) - minutes[n];
        // min = mini(diff_2,min);
        minDiff = min(minDiff,diff_2) ;

        return minDiff;

    }
};