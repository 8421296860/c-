#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    //Initializing variable.
    char str[100];  
    int i,vowels=0;
    
    //Accepting input.
    cout<<"Enter  the string : ";
    cin.getline(str,100);
    
    //Initializing for loop. 
    for(i=0;str[i];i++)  
    {
        //Counting the vowels.
        if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O' ||str[i]=='U')
        {
		    vowels++;
        }
    }
 	
    //Printing the count of vowels.
    cout<<"Total number of vowels in the string = "<<vowels;
    
    
    return 0;
}