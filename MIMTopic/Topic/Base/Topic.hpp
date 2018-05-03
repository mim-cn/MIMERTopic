//
//  Topic.hpp
//  MIMTopic
//
//  Created by wangkai on 2018/5/2.
//  Copyright © 2018年 wangkai. All rights reserved.
//

#ifndef BaseTopic_hpp
#define BaseTopic_hpp

#include <stdio.h>
#include <string>
#include "TopicDefines.h"

namespace MIM {
    
    int callTopic(std::string &path, TopicRequest &request);
    
};

#endif /* BaseTopic_hpp */
