class Solution {
public:
    bool isPowerOfFour(int num) {
        return (num>0 && (num & (num-1))==0 && ((num & 0x55555555) == num));
    }
    //first condition is to check whether num>0 or not
    //second condition is to check power of 2
    //third condition is to check that 1, in binary form of num should be present at odd places
    //P.S. 0x55=01010101(8 bits)
    //so for 32 bits we need 4 more pairs of 0x55
};
