//
//  TopicDefines.h
//  MIMTopic
//
//  Created by wangkai on 2018/5/2.
//  Copyright © 2018年 wangkai. All rights reserved.
//

#ifndef TopicDefines_h
#define TopicDefines_h

#define TOPIC_OK            0
#define TOPIC_NOT_EXISTS    1
#define TOPIC_INVALID_ARGS  2
struct TopicRequest {
    __INT32_TYPE__ id;
    unsigned char *data;
};

#endif /* TopicDefines_h */
