/*                                                      ===================== Dark Light ======================
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
   
   Problem
Tonmoy has a special torch. The torch has  4 levels numbered 
1 to 4 and 2 states (On and Off ). Levels 1,2, and 3 correspond to the On state while level 4 corresponds to the Off state.
The levels of the torch can be changed as:
Level 1 changes to level 2
Level 2 changes to level 3.
Level 3 changes to level 4.
Level 4 changes to level 1.

Given the initial state K and the number of changes made in the levels as N, find the final state of the torch. If the final state cannot be determined. print Ambiguous instead. 

Input Format 
 * First line will contain T, the number of test cases. Then the test cases follow :
       * Each test case contains of a single line of input, two integers N,K -
         the number of changes made in the levels of the torch. Here, K = 0 denotes "Off" state while K = "1"
         denotes "ON" state. 
         
Output Format 
  For each test case, output in a single line, the final state of the torch, i.e. On or Off. If the final state 
   cannot be determined, then print "Ambiguous" instead.
   
 Constraints  
    * 1 <= T <= 10^5
    * 0 <= N <= 10^9
    * 0 <= K <= 1
    
    Sample :
      Input
      ---------------
       3 //test case
       4 0
       0 1 
       3 1
       
       ---------------------
       Output
       ---------------
       Off
       On 
       Ambiguous
       -----------------------
       
       Explaination :
       Test Case 1 : Initially the torch is in Off stae. Since level is only 4
       corresponds to the Off state, the torch is at level 4 initially. After 4 changes, 
       the final state would be 4. Level 4 corresponds to the Off state. Hence, finally the torch is Off.
      
       Test Case 2 : Initially, the torch is in On state. After 0 changes, the torch remains in the On state. 
       
       Tets Case 3 : Initially, the torch is in On state. After 0 changes, the torch remains in the On state.
       
       Test Case 3 : Initially, the torch is in On state. This can correspond to any of the first 3 levels. Thus,
       we cannot determine the final level after 3 changes. Hence, the final state is Ambiguous.                                                                                                                                                                       


-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

#include <iostream>
using namespace std;

int main() {
    int t;  //test case 
    cin>>t;
    
    while(t--) {
        int n, k;  // n --> no. of changes in levels  , k --> initial state "ON" -- 0 or "OFF" -- 1
        cin>>n>>k;
        
        if (n%4 == 0) {
            cout<< (k==0 ? "Off":"On");
        }
        else {
            cout<< (k==0 ? "On":"Ambiguous");
        }
        cout<<endl;
    }
    
    return 0;
}
