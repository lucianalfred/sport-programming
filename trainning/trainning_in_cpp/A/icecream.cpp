#include <iostream>
#include <string>
#include <stdlib.h>


using namespace std;
int main()
{
  int n;
  long long x;
  
  cin >> n >> x;
  
  long long icecream  = x;
  long long d = 0;
  
  for(int i = 0; i < n; i++)
  {
      char sign; 
      long long request;
      
      cin >> sign >> request;
      if (sign == '+')
            icecream += request;
      else if (sign == '-') {
          if (icecream >= request){
              icecream -= request;
          }
          else{
              d++;
          }
      }
   }
   
   cout << icecream << " " <<  d << endl;
}
