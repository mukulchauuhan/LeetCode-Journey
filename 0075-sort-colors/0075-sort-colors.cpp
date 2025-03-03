class Solution {
public:
    void sortColors(vector<int>& nums) {
         // 0 => red, 1 => white, 2 => blue
         // Counting Method :
        /* int cR, cW, cB;
        cR = cW = cB = 0;

        for(int i=0; i<nums.size(); i++) {
            if(nums[i] == 0) cR++;
            else if(nums[i] == 1) cW++;
            else cB++;
        }
        int i=0;
        while(cR > 0){
            nums[i] = 0;
            i++;
            cR--;
        }
        while(cW > 0){
            nums[i] = 1;
            i++;
            cW--;
        }
        while(cB > 0){
            nums[i] = 2;
            i++;
            cB--;
        }
    } */

    // 3 - Pointer Approach
    int l=0, m=0, h=nums.size()-1;

    while(m <= h) {
        if(nums[m] == 0) { // for zeros
            swap(nums[l], nums[m]);
            l++, m++;
        }
        else if(nums[m] == 1) { // for ones
            m++;
        }
        else { // for twos
            swap(nums[m], nums[h]);
            h--;
        }
    }
    }
};