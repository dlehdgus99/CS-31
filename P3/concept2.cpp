#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
using namespace std;





int findnum(string s,int a,int b)
{
    int num=0;
    int c=0;
    for (int i=b-1; i>a; i--)
    {
        num+=(s[i]-'0')*pow(10,c);
        c+=1;
    }
    return num;
}

int checkbackwards(string s, char target)
{
    int a=0;
    for(int i=s.size()-1;i>=0;i--)
    {
        if (s[i]==target)
        {
            a=i;
            break;
        }
    }

    return a;
}


string destroy(string s, char a)
{
    string b="";
    for (int i=0; i<s.size(); i++ )
    {
        if (s[i]!=a)
            b+=s[i];

    }
    return b;
}






int check(string sth, string target)
{
    if (sth.size()<target.size())
        return 0;
    else
    {
        string a="";
        int k=0;
        for(int i=0;i<sth.size();i++)
        {
            if (sth[i]==target[0])
            {
                a="";
                for(int j=i;j<target.size()+i;j++)
                {
                    a+=sth[j];
                }
            }
            if (a==target)
            {
                k=i;
                break;
            }
            
        }
        if (a==target)
            return k+1;
        else
            return 0;
    }
}

bool number(string s)
{
    for (int i=0;i<s.size();i++)
    {
        if (!isdigit(s[i]))
            return false;
    }
    return true;
}



int countChars(string s, char c)
{
    int total = 0;
    for (int k = 0; k != s.size(); k++)
    {
        if (s[k] == c)
            total++;
    }
    return total;
}


string justLetters(string s)
{
    string result = "";
    for (int i = 0; i<s.size(); i++)
    {
        if (s[i]!=' ')
            result+=s[i];
    }
    return result;
}

bool checkSpace(string s, int a, int b)
{
    if ((b-a)>=2)
        for (int i=b;i-a>=2;i--)
        {
            if ((s[i-1]==' ') && (isdigit(s[i-2])))
                return false;
        }
    return true;
}







bool isValidRowerString(string rowerString)
{
    if (rowerString=="")
        return false;
    if (rowerString.size()<12)
        return false;
    if (countChars(rowerString,':')!=1)
        return false;
    if (countChars(rowerString,'m')!=2)
        return false;
    if (countChars(rowerString,'s')!=1)
        return false;
    if (countChars(rowerString,'/')!=1)
        return false;
    if (!number((justLetters(destroy(destroy(destroy(destroy(rowerString,':'),'m'),'s'),'/')))))
        return false;

    
    if ((check(rowerString,":")==0) || (check(rowerString,": ")>0) || (check(rowerString," s/m")<=check(rowerString,":")) || (check(rowerString,"  s/m")>0) || (check(rowerString," m")<=check(rowerString," s/m")) || (check(rowerString,"  m")>0))
        return false;
    if ((check(rowerString,":")>=2)&&(!isdigit(rowerString[(check(rowerString,":"))-2]))&&((rowerString[(check(rowerString,":"))-2])!=' '))
        return false;
    if (!isdigit(rowerString[(check(rowerString," s/m")-2)]))
        return false;
    if (!isdigit(rowerString[(check(rowerString," m")-2)]))
        return false;
    if (!isdigit(rowerString[rowerString.size()-1]))
        return false;
    if(!checkSpace(rowerString, check(rowerString,":")+2, check(rowerString," s/m")-2))
        return false;
    if(!checkSpace(rowerString, check(rowerString," s/m")+3, check(rowerString," m")-2))
        return false;
    if(!checkSpace(rowerString, check(rowerString," m")+1 ,rowerString.size()-1 ))
        return false;
    if(!checkSpace(rowerString, 0, check(rowerString,":")))
        return false;
    if ((check((justLetters(rowerString)),":")!=1) && (check((justLetters(rowerString)),":")!=2) && (check((justLetters(rowerString)),":")!=3))
        return false;
    
    if (check((justLetters(rowerString)),":")==3)
    {
        if (justLetters(rowerString)[0]=='0')
            return false;
        if (justLetters(rowerString)[0]=='6')
            return false;
        if (justLetters(rowerString)[0]=='7')
            return false;
        if (justLetters(rowerString)[0]=='8')
            return false;
        if (justLetters(rowerString)[0]=='9')
            return false;
        if (justLetters(rowerString)[3]=='6')
            return false;
        if (justLetters(rowerString)[3]=='7')
            return false;
        if (justLetters(rowerString)[3]=='8')
            return false;
        if (justLetters(rowerString)[3]=='9')
            return false;
        
        
        if ((check((justLetters(rowerString)),"s/m")!=9) && (check((justLetters(rowerString)),"s/m")!=8)&& (check((justLetters(rowerString)),"s/m")!=7))
            return false;
        if (justLetters(rowerString)[5]=='0')
            return false;
    }
    if (check((justLetters(rowerString)),":")==2)
    {
        if (justLetters(rowerString)[0]=='0')
            return false;
        if (justLetters(rowerString)[2]=='6')
            return false;
        if (justLetters(rowerString)[2]=='7')
            return false;
        if (justLetters(rowerString)[2]=='8')
            return false;
        if (justLetters(rowerString)[2]=='9')
            return false;
        
        if ((check((justLetters(rowerString)),"s/m")!=8) && (check((justLetters(rowerString)),"s/m")!=7)&& (check((justLetters(rowerString)),"s/m")!=6))
            return false;
        if (justLetters(rowerString)[4]=='0')
            return false;
    }
    if (check((justLetters(rowerString)),":")==1)
    {
        if (justLetters(rowerString)[1]=='6')
            return false;
        if (justLetters(rowerString)[1]=='7')
            return false;
        if (justLetters(rowerString)[1]=='8')
            return false;
        if (justLetters(rowerString)[1]=='9')
            return false;
        
        if ((check((justLetters(rowerString)),"s/m")!=7) && (check((justLetters(rowerString)),"s/m")!=6)&& (check((justLetters(rowerString)),"s/m")!=5))
            return false;
        if (justLetters(rowerString)[3]=='0')
            return false;
    }
    if (justLetters(rowerString)[check(justLetters(rowerString), "s/m")+2]=='0')
        return false;
    
    
    if ((justLetters(rowerString)[justLetters(rowerString).size()-2]!='m') && (justLetters(rowerString)[justLetters(rowerString).size()-3]!='m') && (justLetters(rowerString)[justLetters(rowerString).size()-4]!='m'))
        return false;
    
    if (justLetters(rowerString)[justLetters(rowerString).size()-2]=='m')
    {
        if (justLetters(rowerString)[justLetters(rowerString).size()-1]=='0')
            return false;
    }
    if (justLetters(rowerString)[justLetters(rowerString).size()-3]=='m')
    {
        if (justLetters(rowerString)[justLetters(rowerString).size()-2]=='0')
            return false;
    }
    if (justLetters(rowerString)[justLetters(rowerString).size()-4]=='m')
    {
        if (justLetters(rowerString)[justLetters(rowerString).size()-3]=='0')
            return false;
    }
    return true;
}








    
int totalDistance(string rowerString)
{
    if (isValidRowerString(rowerString)==false)
        return -1;
    else
    {
        return findnum(justLetters(rowerString), check(justLetters(rowerString), "/m"), checkbackwards(justLetters(rowerString), 'm'));
    }
        
}



int heartRate(string rowerString)
{
    if (isValidRowerString(rowerString)==false)
        return -1;
    else
    {
        return findnum(justLetters(rowerString),checkbackwards(justLetters(rowerString), 'm') , justLetters(rowerString).size());
    }
    
}





int strokesPerMinute(string rowerString)
{
    if (isValidRowerString(rowerString)==false)
        return -1;
    else
    {
        return findnum(justLetters(rowerString),check(justLetters(rowerString), ":")+1,check(justLetters(rowerString), "s")-1);
    }
    
}



int elapsedMinutes(string rowerString)
{
    if (isValidRowerString(rowerString)==false)
        return -1;
    else
    {
        return findnum(justLetters(rowerString), -1, check(justLetters(rowerString),":")-1);
    }
    
}



int elapsedSeconds(string rowerString)
{
    if (isValidRowerString(rowerString)==false)
        return -1;
    else
    {
        return findnum(justLetters(rowerString),check(justLetters(rowerString),":")-1 ,check(justLetters(rowerString),":")+2);
    }
    
}











int main()
{
    return 0;
    
}
