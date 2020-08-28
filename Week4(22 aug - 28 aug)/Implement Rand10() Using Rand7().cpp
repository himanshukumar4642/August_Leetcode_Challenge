// The rand7() API is already defined for you.
// int rand7();
// @return a random integer in the range 1 to 7

class Solution {
public:
    int rand10() {
        int i,j;
    while( (i = rand7()) > 6);  
    while( (j = rand7()) > 5);  
        return (i&1) ? j : j+5;
    }
};
