#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
	    int x,tabla[100];
	cout<<setprecision (2);
	cout<<fixed;
	
	    for(x=0;x<=99;x++)
	    {
      tabla[x]=x;
	}
	    for(x=0;x<=99;x++)
	    {
	    cout<<tabla[x]<<endl;
	 }
	 
      return 0;
}
