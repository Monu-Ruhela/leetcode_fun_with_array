class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size= nums.size();
        vector<int>::iterator IT;  //Taking itrator 
        IT = std::unique(nums.begin(), nums.begin()+size);  
        // unique function remove all the duplicate value in vector and shifted the remaining value 
        // after shifting values the remaing place is empty so we use resize funtion 
        // resize to remove the b;lank space left in the vector
        nums.resize(std::distance(nums.begin(), IT));
        size= nums.size(); 
        
    return size;
    }
};
