//
//  URLPath.cpp
//  MIMTopic
//
//  Created by wangkai on 2018/5/2.
//  Copyright © 2018年 wangkai. All rights reserved.
//

#include "URLPath.hpp"

namespace MIM {
    
    URLPath::URLPath(string &path) {
        
        unsigned long loc = path.find("?");
        if (loc == string::npos) {
            components = componentsWithPath(path);
        } else {
            string componentPath = path.substr(0, loc);
            components = componentsWithPath(componentPath);
            string queryString = path.substr(loc + 1);
            queryMap = queryMapWithPath(queryString);
        }
    }
    
    list<string> componentsWithPath(string &path) {
        list<string> components;
        for (unsigned long index=0; index<path.length(); ) {
            unsigned long loc = path.find("/", index);
            if (loc == string::npos) {
                string component = path.substr(index);
                components.push_back(component);
                break;
            } else {
                if (loc > index) {
                    string component = path.substr(index, loc - index);
                    components.push_back(component);
                }
            }
            index = loc + 1;
        }
        return components;
    }
    
    map<string, string> queryMapWithPath(string &query) {
        map<string, string> queryMap;
        for (unsigned long index=0; index<query.length(); ) {
            unsigned long loc = query.find("&", index);
            if (loc == string::npos) {
                string component = query.substr(index);
                unsigned long eqLoc = component.find("=");
                if (eqLoc != string::npos) {
                    string key = component.substr(0, eqLoc);
                    string value = component.substr(eqLoc + 1);
                    queryMap.insert(pair<string, string>(key, value));
                }
                break;
            } else {
                if (loc > index) {
                    string component = query.substr(index, loc - index);
                    unsigned long eqLoc = component.find("=");
                    if (eqLoc != string::npos) {
                        string key = component.substr(0, eqLoc);
                        string value = component.substr(eqLoc + 1);
                        queryMap.insert(pair<string, string>(key, value));
                    }
                }
            }
            index = loc + 1;
        }
        return queryMap;
    }
}
