class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        if (x == 0) {
            return true;
        }

        int n = x;
        int digitCount = 0;

        while (n > 0) {
            n = n / 10;
            digitCount++;
        }

        int digits[10];

        n = x;
        int index = 0;

        while (n > 0) {
            int digit = n % 10;
            digits[index] = digit;
            n = n / 10;
            index++;
        }

        for (int i = 0; i < digitCount / 2; i++) {
            if (digits[i] != digits[digitCount - 1 - i]) {
                return false;
            }
        }

        return true;
    }
};