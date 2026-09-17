class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int note5 =0;
        int note10 =0;
        for(int i =0; i<bills.size(); i++){
            if(bills[i]==5)note5++;
            else if(bills[i]==10){
                if(note5>=1){
                    note5--;
                    note10++;
                }
                else return false;
            }
            else{
                if(note5>=3){
                    note5-=3;
                }
                else if(note5>=1 && note10>=1){
                    note5-=1;
                    note10-=1;
                }
                else return false;
            }
        }
        return true;
    }
};