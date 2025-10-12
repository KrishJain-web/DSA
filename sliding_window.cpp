// O(1) space complexity because in a sliding window of k elemnts , fixed k elements are getting stored therefor O(K) but in asymptotic it is O(1)
//time complexity O(kn) , basically it must be (n-K)K
int max_sum)sliding_wnidoe(int arr[] , int k){
int  answer = INT_MIN;
for(int i = 0; i <= n- k ; i++){
   for(int j = 0 ; j <k ; j++){
       temp += arr[i+j];
   }
if(temp>answer) answer = temp;
}

      
