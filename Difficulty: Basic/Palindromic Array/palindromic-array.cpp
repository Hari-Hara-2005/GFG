/*Complete the function below*/

class Solution {
  public:
    bool isPalinArray(vector<int> &arr) {
        // code here
        int n = arr.size();
        for(int i=0;i<n;i++){
            int num = arr[i];
            int reverse=0;
            while(num>0){
                int rem = num%10;
                reverse=(reverse*10)+rem;
                num =num/10;
            }
            if(arr[i]!=reverse){
                return false;
            }
        }
        return true;
    }
};