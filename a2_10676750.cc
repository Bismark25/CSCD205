#include <iostream>
 using namespace std;

 int main (int argc,char**argv)
{
  int n, i;
  bool isPrime = true;
  cout << "Please enter a positive integer(greater than 1): " << endl;
  cin >> n;
  cout << endl;
  if (n <= 1)
     {
      cout << "The smallest prime number is 2\n" << n << " is not a prime number" << endl;
     }
 for (n = 2; ++n;)
  {
   for (i=2; i<=n/2; ++i)
    {
     if (n%i == 0)
       {
      isPrime = false;
       break;
       }
    }
  }
  if (isPrime)
      cout << n << " is a prime number" << endl;
  else
      cout << n << " is not a prime number" << endl;
 
 return 0;
} 

