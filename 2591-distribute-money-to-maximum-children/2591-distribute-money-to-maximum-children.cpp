class Solution {
public:
    int distMoney(int money, int children) {
        if (money < children) {
            return -1;
        }

        money -= children; 

        int answer = min(money / 7, children);
        money -= answer * 7;  

        if (answer == children && money > 0) {
            answer--;
        }
        else if (answer == children - 1 && money == 3) {
            answer--;
        }

        return answer;
    }
};