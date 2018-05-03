//
//  URLPath.hpp
//  MIMTopic
//
//  Created by wangkai on 2018/5/2.
//  Copyright © 2018年 wangkai. All rights reserved.
//

#ifndef URLPath_hpp
#define URLPath_hpp

#include <stdio.h>
#include <list>
#include <map>
#include <string>

using namespace std;


namespace MIM {
    
    class URLPath {
    public:
        URLPath(string &path);
        list<string> components;
        map<string, string> queryMap;
    };
    
    list<string> componentsWithPath(string &path);
    map<string, string> queryMapWithPath(string &query);
}

#endif /* URLPath_hpp */
