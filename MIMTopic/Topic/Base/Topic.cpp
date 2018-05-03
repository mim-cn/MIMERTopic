//
//  Topic.cpp
//  MIMTopic
//
//  Created by wangkai on 2018/5/2.
//  Copyright © 2018年 wangkai. All rights reserved.
//

#include "Topic.hpp"
#include "URLPath.hpp"
#include "UserTopic.hpp"
#include "RelationTopic.hpp"
#include "MessageTopic.hpp"

using namespace std;

namespace MIM {
    
    int realCallTopic(string &topicName, list<string> *components, TopicRequest &request) {
        if (topicName == "user") {
            User::receiveRequest(components, request);
        } else if (topicName == "user") {
            
        } else if (topicName == "user") {
            
        }
        return TOPIC_NOT_EXISTS;
    }
    
    int callTopic(string &path, TopicRequest &request) {
        URLPath urlPath(path);
        if (urlPath.components.empty()) {
            return TOPIC_INVALID_ARGS;
        }
        string topicName = urlPath.components.front();
        return realCallTopic(topicName, &urlPath.components, request);
    }
}


