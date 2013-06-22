//
//  BaseEffect.h
//  VKEffectDemo
//
//  Created by Kasajima Yasuo on 2013/06/22.
//  Copyright (c) 2013年 __MyCompanyName__. All rights reserved.
//

#ifndef VKEffectDemo_BaseEffect_
#define VKEffectDemo_BaseEffect_

#include "cocos2d.h"

class BaseEffect : public cocos2d::CCSprite
{

public:
	BaseEffect();
	virtual ~BaseEffect();
    virtual bool init();
    CREATE_FUNC(BaseEffect);
    
    const char* effectName = "";
    int frameCount = 1;
    float frameRate = 0.1f;
    float getAnimationTime();
    
    void effectInPosition(cocos2d::CCPoint point);
    void effectInCenter();
    virtual void effect();
    cocos2d::CCSpriteBatchNode* getSpriteBatchNode();
    void setCallBack(cocos2d::CCFiniteTimeAction *callBack);
    
protected:
    cocos2d::CCFiniteTimeAction *_callBack;
};

#endif