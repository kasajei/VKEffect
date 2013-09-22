//
//  EffectThunderMagic.cpp
//  VKEffectDemo
//
//  Created by Kasajima Yasuo on 2013/06/22.
//  Copyright (c) 2013年 __MyCompanyName__. All rights reserved.
//

#include "EffectLightMagic.h"
#include "EffectMagicCircle.h"
#include "EffectLight.h"
#include "EffectLightSmall.h"

using namespace cocos2d;

EffectLightMagic::EffectLightMagic()
{
}

EffectLightMagic::~EffectLightMagic()
{
}

CCFiniteTimeAction* EffectLightMagic::effectDefinition(){
    CCSequence *seq = CCSequence::create(
                                         CCCallFunc::create(this, callfunc_selector(EffectLightMagic::animation1)),
                                         CCDelayTime::create(EffectMagicCircle::create()->getAnimationTime()-0.4),
                                         CCCallFunc::create(this, callfunc_selector(EffectLightMagic::animation2)),
                                         CCDelayTime::create(EffectLight::create()->getAnimationTime()-0.4),
                                         CCCallFunc::create(this, callfunc_selector(EffectLightMagic::animation3)),
                                         CCDelayTime::create(EffectLightSmall::create()->getAnimationTime()),
                                         _callBack,
                                         NULL
                                         );
    
    return seq;
}

void EffectLightMagic::animation1(){
    BaseEffect *effect = EffectMagicCircle::create();
    effect->setScaleY(0.75);
    effect->setScaleX(2);
    this->addChild(effect);
    effect->effect();
    
}
void EffectLightMagic::animation2(){
    BaseEffect *effect = EffectLight::create();
    effect->setPosition(ccp(0,effect->getContentSize().height*0.4));
    effect->setScaleX(4);
    this->addChild(effect);
    effect->effect();
}
void EffectLightMagic::animation3(){
    BaseEffect *effect = EffectLightSmall::create();
    float scaleY = 1.5;
    effect->setPosition(ccp(0,effect->getContentSize().height*0.4*scaleY));
    effect->setScaleY(scaleY);
     effect->setScaleX(2);
    this->addChild(effect);
    effect->effect();
}