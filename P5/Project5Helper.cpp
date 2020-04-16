//
//  Project5Helper.cpp
//  Project5Helper
//
//  Created by Howard Stahl on 2/13/19.
//  All rights reserved.
//

#include "Project5Helper.h"

Project5Helper::Project5Helper()
{
    
}

bool Project5Helper::endsWithPM(const std::string & mainStr )
{
    return( endsWith( mainStr, "PM" ) );
}

bool Project5Helper::endsWith(const std::string & mainStr, const std::string & toMatch)
{
    bool result( false );
    if(mainStr.size() >= toMatch.size() &&
       mainStr.compare(mainStr.size() - toMatch.size(), toMatch.size(), toMatch) == 0)
    {
        result = true;
    }
    return( result );
}


bool Project5Helper::startsWith(const std::string & mainStr, const std::string & toMatch)
{
    bool result( false );
    // std::string::find returns 0 if toMatch is found at starting
    if(mainStr.find(toMatch) == 0)
    {
        result = true;
    }
    return( result );
}


bool Project5Helper::startsWithOrchestra(const std::string & mainStr )
{
    return( startsWith( mainStr, "Orchestra" ) );
}
