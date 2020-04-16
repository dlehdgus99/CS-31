#include <iostream>
using namespace std;



void deleteDigits(char* a)
{
    char* ptr=a;
    while(*a!='\0')
    {
        if((*a=='0') ||  (*a=='1') ||  (*a=='2') ||  (*a=='3') ||  (*a=='4') ||  (*a=='5') ||  (*a=='6') ||  (*a=='7') ||  (*a=='8') ||  (*a=='9'))
        {
            ptr=a;
            while(*ptr!='\0')
            {
                *ptr=*(ptr+1);
                ptr++;
                
            }
        }
        else
            a++;
    }
        
    
    
}
int main()
{
    char msg[100] = "Happy 2bf019!";
    deleteDigits(msg);
    cout << msg << endl;        // prints:   Happy !
}
