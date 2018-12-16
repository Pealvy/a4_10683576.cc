#include<iostream>
#include<cstdlib>

using namespace std;

int gcd(int n,int m)

{    
     if((n>=m)&&((n%m)==0))
          return(m);
     
     else 
         gcd(m,(n%m));
}
  
  int main()
{
    int n,m,result;
    
    cout<<"enter the first number:";
    
    cin >>n;
    
    cout<<"enter the second number:";
    
    cin>>m;
    
    result=gcd(n,m);
    
    cout<<"the GCD of"<<n<<" and "<<m<<" is "<<result;
    
    system("pause");
    
    return 0;
}
