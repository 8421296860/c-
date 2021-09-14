#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{


    int num,check=0;
    cout<<" Enter one number\n";
    cin>>num;
if( num == 0 || num == 1)
{
    check=1;

}
for (int i = 2 ; i<=num-1 ; i++)
{
if(num%i==0) 
{
    check=1;

}



}

if(check == 0) 
{
    cout<<num <<" is prime number";
}
else
{
    cout<<num<<" is not prime number";
}

    return 0;
}
