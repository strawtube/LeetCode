class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> checked;
        while(n!=1 && checked.find(n)==checked.end()){
            checked.insert(n);
            int sq_sum = 0;
            while(n>0){
                int rem = n%10;
                sq_sum += rem*rem;
                n /=10;
            }
            n=sq_sum;
        }
        return n==1;;
    }
};
