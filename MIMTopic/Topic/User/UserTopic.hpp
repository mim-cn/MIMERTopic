//
//  UserTopic.hpp
//  MIMTopic
//
//  Created by wangkai on 2018/5/2.
//  Copyright © 2018年 wangkai. All rights reserved.
//

#ifndef UserTopic_hpp
#define UserTopic_hpp

#include <stdio.h>
#include <list>
#include <string>
#include "TopicDefines.h"

using namespace std;

namespace User {
    int receiveRequest(list<string> *components, TopicRequest &request);
}

#endif /* UserTopic_hpp */
