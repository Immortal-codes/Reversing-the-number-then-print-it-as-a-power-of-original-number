#include<iostream>
#include<cmath>

using namespace std;


int main()
{
    int n, k =0, remainder;

  n=2;
  int j;
  j=n;

  while(n != 0) {
    remainder = n % 10;
    k = k * 10 + remainder;
    n /= 10;
    
    
  }
  cout << "Reversed Number = " << k<<endl;
  cout<<pow(j,k);

}
