// problem: permutation in string (LeetCode 567)
// approach:frequency count + sliding window (Brute)
// Time Complexity: O(n * 26)
// Space Complexity: O(1)
#include <string>
using namespace std;

class Solution {
public:

    bool isFreqSame(int freq1[], int freq2[]) {

        for (int i = 0; i < 26; i++) {

            if (freq1[i] != freq2[i])
                return false;
        }

        return true;
    }


    bool checkInclusion(string s1, string s2) {

        int freq[26] = {0};

        for (int i = 0; i < s1.length(); i++) {

            freq[s1[i] - 'a']++;
        }


        int windowSize = s1.size();


        for (int i = 0; i < s2.length(); i++) {

            int windowFreq[26] = {0};

            int windowIndex = 0;
            int index = i;

            while (windowIndex < windowSize && index < s2.length()) {

                windowFreq[s2[index] - 'a']++;

                windowIndex++;
                index++;

                if (isFreqSame(freq, windowFreq))
                    return true;
            }
        }

        return false;
    }
};