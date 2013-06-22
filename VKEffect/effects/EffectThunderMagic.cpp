//
//  EffectThunderMagic.cpp
//  VKEffectDemo
//
//  Created by Kasajima Yasuo on 2013/06/22.
//  Copyright (c) 2013年 __MyCompanyName__. All rights reserved.
//

#include "EffectThunderMagic.h"
#include "EffectMagicCircle.h"
#include "EffectThunder.h"
#include "EffectMokusei.h"

using namespace cocos2d;

EffectThunderMagic::EffectThunderMagic()
{
}

EffectThunderMagic::~EffectThunderMagic()
{
}

CCFiniteTimeAction* EffectThunderMagic::effectDefinition(){
    CCSequence *seq = CCSequence::create(
                                         CCCallFunc::create(this, callfunc_selector(EffectThunderMagic::animation1)),
                                         CCDelayTime::create(EffectMagicCircle::create()->getAnimationTime()-0.25),
                                         CCCallFunc::create(this, callfunc_selector(EffectThunderMagic::animation2)),
                                         CCDelayTime::create(EffectThunder::create()->getAnimationTime()-0.25),
                                         CCCallFunc::create(this, callfunc_selector(EffectThunderMagic::animation3)),
                                         CCDelayTime::create(EffectMokusei::create()->getAnimationTime()),
                                         _callBack,
                                         NULL
                                         );
    
    return seq;
}

void EffectThunderMagic::animation1(){
    BaseEffect *effect = EffectMagicCircle::create();
    effect->setScaleY(0.75);
    this->addChild(effect);
    effect->effect();
    
}
void EffectThunderMagic::animation2(){
    BaseEffect *effect = EffectThunder::create();
    effect->setPosition(ccp(0,effect->getContentSize().height*0.4));
    this->addChild(effect);
    effect->effect();
}
void EffectThunderMagic::animation3(){
    BaseEffect *effect = EffectMokusei::create();
    this->addChild(effect);
    effect->effect();
}