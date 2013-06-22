//
//  EffectFires.h
//  VKEffectDemo
//
//  Created by Kasajima Yasuo on 2013/06/22.
//  Copyright (c) 2013年 __MyCompanyName__. All rights reserved.
//

#ifndef VKEffectDemo_EffectFires_
#define VKEffectDemo_EffectFires_

#include "BaseEffectManager.h"

class EffectFires : public BaseEffectManager
{
public:
	EffectFires();
	virtual ~EffectFires();
    CREATE_FUNC(EffectFires);
    void firstEffect();
    void secondEffect();
protected:
    virtual cocos2d::CCFiniteTimeAction* effectDefinition();
    cocos2d::CCSpriteBatchNode *batchNode;
};

#endif