//
//  BaseEffectManager.h
//  VKEffectDemo
//
//  Created by Kasajima Yasuo on 2013/06/22.
//  Copyright (c) 2013年 __MyCompanyName__. All rights reserved.
//

#ifndef VKEffectDemo_BaseEffectManager_
#define VKEffectDemo_BaseEffectManager_

#include "cocos2d.h"

class BaseEffectManager : public cocos2d::CCNode
{

public:
	BaseEffectManager();
	virtual ~BaseEffectManager();
	virtual bool init();
    CREATE_FUNC(BaseEffectManager);
    virtual void effectInPosition(cocos2d::CCPoint point);
    virtual void effectInCenter();
    virtual void effect();
    virtual void setCallBack(cocos2d::CCFiniteTimeAction *callBack);
protected:
    virtual cocos2d::CCFiniteTimeAction* effectDefinition();
    virtual void endEffect();
    cocos2d::CCFiniteTimeAction *_callBack;
};

#endif