//
//  main.cpp
//  MIMTopic
//
//  Created by wangkai on 2018/5/2.
//  Copyright © 2018年 wangkai. All rights reserved.
//

#include <iostream>
#include "URLPath.hpp"

int main(int argc, const char * argv[])
{
    string path = "user/profile/edit?op=xxx&uid=222";
    std::cout << path << endl;
    MIM::URLPath urlPath(path);
    list<string>::iterator itor;  //定义迭代器
    itor = urlPath.components.begin();
    while(itor!=urlPath.components.end())
    {
        cout<< *itor++<<endl;
    }
    map<string,string>::iterator it;
    it = urlPath.queryMap.begin();
    while(it != urlPath.queryMap.end())
    {
        cout<< it->first<<endl;
        cout<< it->second<<endl;
        it ++;
    }
    return 0;
}
