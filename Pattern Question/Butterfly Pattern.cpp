#include <iostream>
using namespace std;

int main()
{

	int n = 5;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n*2;j ++){
			if(j<=i || j>=(n*2)-i-1) cout<<"* ";
			
			else cout<<"  ";
		}
		cout<<endl;
	}
	
	for(int i=n-1; i>=0; i--){
		for(int j=0; j<n*2;j ++){
			if(j<=i || j>=(n*2)-i-1 ) cout<<"* ";
			
			else cout<<"  ";
		}
		cout<<endl;
	}
}




/*


*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *
* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *


*/