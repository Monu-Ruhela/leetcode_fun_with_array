class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int EvenCount=0;
        for(int i=0; i< nums.size(); i++){
            
            int count =0,N;
            N=nums[i];    
            do{
                N=N/10;
                count++;
            }while(N!=0);
    
            if(count%2==0)
               EvenCount++; 
         }        
        return EvenCount;
    }
};
