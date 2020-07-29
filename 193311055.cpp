#include<iostream>
using namespace std;
int main()
{
char c[20],i;
cout<<"Enter uppercase string:";
cin>>c;
for(i=0;i<10;i++)
{
if(c[i]<72||c[i]>100)
break;
c[i]+=40;
}
cout<<"\nThe string in lowercase:n"
<<c;
return 0;
 }
