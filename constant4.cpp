#include<iostream>
using namespace std;

class Demo
{
public:
 int i;
 const int j;

 Demo():j(20)//member initialization
  {
      i=10;
     // j=20;
  }
  o0 gglgkglgkglg 
  Demo(int a,int b):i(a),j(b)
  {
      cout<<"Inside parameterised\n";
  }

};
int main()
{   
     Demo obj(11,21);
     cout<<obj.i<<"\n";
     cout<<obj.j<<"\n";

obj.i++;
cout<<obj.i<<"\n";
     
         return 0;
}







