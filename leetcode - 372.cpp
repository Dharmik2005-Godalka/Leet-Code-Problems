class Solution {
public:

    long long power(long long a, int b) {
        long long result = 1;

        for(int i =0; i<b; i++) {
            result = (result *a) % 1337;
        }
        return result;
    }

    int superPow(int a, vector<int>& b) {
        long long answer = 1;

        for(int i = 0; i < b.size(); i++) {
            answer = power(answer, 10);
            answer = (answer * power(a, b[i])) % 1337;
        }
        return answer;
    }
};