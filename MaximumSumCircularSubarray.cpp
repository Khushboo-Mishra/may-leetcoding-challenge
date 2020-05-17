class Solution {
public:
    
 int kadane(vector<int> a, int n)  {  
    int max_so_far = a[0]; 
    int curr_max = a[0]; 
  
    for (int i = 1; i < n; i++) 
    { 
        curr_max = max(a[i], curr_max+a[i]); 
        max_so_far = max(max_so_far, curr_max); 
    } 
    return max_so_far;  
    }  
    
 int maxSubarraySumCircular(vector<int>& A) {
        int n = A.size();
        int max_kadane = kadane(A, n);  
        if(max_kadane < 0) 
            return max_kadane;

        int max_wrap = 0, i;  
        for (i = 0; i < n; i++)  
            {  
            max_wrap += A[i]; 
            A[i] = -A[i];
            }  
       
        max_wrap = max_wrap + kadane(A, n);  
      
        return (max_wrap > max_kadane)? max_wrap: max_kadane;
    }
    
};
