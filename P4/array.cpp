#include <iostream>
#include <string>
#include <cctype>
#include <cassert>
using namespace std;







bool hasDuplicates( const std::string array[ ],  int size )
{
    if (size<=0)
        return false;
    for (int i=0;i<size;i++)
    {
        for (int j=0;j<size;j++)
        {
            if ((array[i]==array[j]) &&(i!=j))
            {
                return true;
            }
        }
    }
    return false;
    
}








int  countAllDigits( const std::string array[ ] , int size )
{
    int a=0;
    if (size<=0)
        return -1;
    for (int i=0;i<size;i++)
    {
        for(int j=0;j<array[i].size();j++)
        {
            if (isdigit((array[i])[j]))
                a+=1;
        }
    }
    if(a==0)
        return -1;
    else
        return a;
}







bool isInDecreasingOrder( const std::string array[ ], int size )
{
    int a=0;
    if (size<0)
        return false;
    if (size==1)
        return true;
    if (size==0)
        return true;
    for(int i=0;i+1<size;i++)
    {
        if (array[i]<=array[i+1])
            a+=1;
    }
    if (a!=0)
        return false;
    else
        return true;
}






int shiftRight(std::string array[ ], int size, int amount, std::string placeholder )
{
    int a=0;
    if (size<0)
        return -1;
    if (amount<0)
        return -1;
    if (amount<size)
    {
        for(int i=amount;i<size;i++)
        {
            array[i]=array[a];
            a++;
        }
        for (int i=0;i<=size-amount;i++)
        {
            array[i]=placeholder;
        }
    }
    if (amount>=size)
    {
        for(int i=0;i<size;i++)
            array[i]=placeholder;
    }
    if (amount<=size)
        return amount;
    if(amount>size)
        return size;
    return -1;
}




int  find( const std::string array[ ], int size, std::string match )
{
    if (size<=0)
        return -1;
    for(int i=0;i<size;i++)
    {
        if (array[i]==match)
        {
            return i;
        }
    }
    return -1;
}




int  replaceAllCharacters( std::string array[ ], int size, char findLetter, char replaceLetter )
{
    int a=0;
    if (size<=0)
        return -1;
    for (int i=0;i<size;i++)
    {
        for (int j=0;j<array[i].size();j++)
        {
            if (array[i][j]==findLetter)
            {
                a+=1;
                array[i][j]=replaceLetter;
            }
        }
    }
    return a;
}




int main()
{
    return 0;
}
