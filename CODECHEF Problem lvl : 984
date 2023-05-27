/*
“You won’t get caught if you hide behind someone.”

Sang-Woo advises Gi-Hun to hide behind someone to avoid getting shot.

Gi-Hun follows Sang-Woo's advice and hides behind Ali, who saved his life earlier. Gi-Hun and Ali both have the same height, K. 
Many players saw this trick and also started hiding behind Ali.
Now, there are N players standing between Gi-Hun and Ali in a straight line, with the i-th  player having height Hᵢ .
Gi-Hun wants to know the minimum number of players who need to get shot so that Ali is visible in his line of sight.
-----------------------------------------------------------------------------------------------------------
SAMPLE INPUT                                             SAMPLE OUTPUT                                    
3                                                         2                                               
4 10                                                      1                                               
2 13 4 16                                                 0                                               
5 8
9 3 8 8 4
4 6
1 2 3 4

-------------------------------------------------------------------------------------------------------


*/
 #include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N, H,count = 0;
	    cin>>N>>H;
	    int H_cmpr[N];
	    for(int i = 0; i<N; i++){
	       cin>>H_cmpr[i];
	       if(H < H_cmpr[i])
	          count++;
	    }
	   cout<<count<<endl;
	}
	return 0;
}
