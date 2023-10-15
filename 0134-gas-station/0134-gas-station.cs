public class Solution {
    public int CanCompleteCircuit(int[] gas, int[] cost) {
        
        int def=0;
        int bal=0;
         int start=0;
         for(int i=0;i<gas.Length;i++)
          {
              bal+=(gas[i]-cost[i]);

              if(bal<0)
              {
                 def+=bal;

                 bal=0;
                 start=i+1;
              }
          }
      
      if(start>=gas.Length || (bal+def<0))
       {
           return -1;
       }
   return start;
        

         
    }
}