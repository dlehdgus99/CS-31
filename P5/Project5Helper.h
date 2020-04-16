//
//  Project5Helper.h
//  Project5Helper
//
//  Created by Howard Stahl on 2/13/19.
//  All rights reserved.
//


#ifndef PROJECT5HELPER_H
#define PROJECT5HELPER_H

#include <string>

class Project5Helper
{
public:
    Project5Helper();
    
    bool startsWithOrchestra(const std::string & mainStr );
    bool startsWith(const std::string & mainStr, const std::string & toMatch);
    
    bool endsWithPM(const std::string & mainStr );
    bool endsWith(const std::string & mainStr, const std::string & toMatch);
};

#endif
