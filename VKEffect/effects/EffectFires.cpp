//
//  EffectFires.cpp
//  VKEffectDemo
//
//  Created by Kasajima Yasuo on 2013/06/22.
//  Copyright (c) 2013年 __MyCompanyName__. All rights reserved.
//

#include "EffectFires.h"
#include "EffectFire.h"

using namespace cocos2d;

EffectFires::EffectFires()
{
    
}

EffectFires::~EffectFires()
{
    CCLOG("remove");
}

CCFiniteTimeAction* EffectFires::effectDefinition(){
    batchNode = EffectFire::create()->getSpriteBatchNode();
    this->addChild(batchNode);
    
    
    CCSequence *seq = CCSequence::create(
                                         CCCallFunc::create(this, callfunc_selector(EffectFires::firstEffect)),
                                         CCCallFunc::create(this, callfunc_selector(EffectFires::secondEffect)),
                                         _callBack,
                                         NULL
    );
    
    return seq;
}

void EffectFires::firstEffect(){
    for (int i = 0 ; i < 25; i++) {
        float rndX = (CCRANDOM_0_1() - 0.5) * 320;
        CCPoint newPoint = CCPointMake(0,rndX);
        EffectFire *fire = EffectFire::create();
        fire->setPosition(newPoint);
        batchNode->addChild(fire);
        fire->effect();
    }
}

void EffectFires::secondEffect(){
    for (int i = 0 ; i < 25; i++) {
        float rndX = (CCRANDOM_0_1() - 0.5) * 320;
        CCPoint newPoint = CCPointMake(rndX,0);
        EffectFire *fire = EffectFire::create();
        fire->setPosition(newPoint);
        batchNode->addChild(fire);
        fire->effect();
    }
}