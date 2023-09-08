# A2Z-DSA-Striver


[
INPUT 234
OUTPUT 2
]


int evenlyDivides(int N){
       
      int X=N;
      int dig,cnt=0;
      while(N>0){
          dig=N%10;
          if(dig==0){
              
          }
             
              
          else if(X%dig==0){
              cnt++;
          }
              N=N/10;
          
        
          }
          return cnt;
          
      }
      
};
