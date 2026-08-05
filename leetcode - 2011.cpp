class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        
        for(int i=0; i<operation.size(); i++) {
            if(operations[i] == ++x || operations[i] == x++) {
                x++; 
            }
            else {
                x--;
            }
            return x;
        }
        
    }
};