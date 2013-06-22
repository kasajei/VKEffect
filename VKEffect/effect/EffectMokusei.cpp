//
//  EffectMokusei.cpp
//  VKEffectDemo
//
//  Created by Kasajima Yasuo on 2013/06/22.
//  Copyright (c) 2013年 __MyCompanyName__. All rights reserved.
//

#include "EffectMokusei.h"

using namespace cocos2d;

EffectMokusei::EffectMokusei()
{
    effectName = "mokusei";
    frameCount = 7;
    frameRate = 0.07f;
}

EffectMokusei::~EffectMokusei()
{
}
bool EffectMokusei::init()
{
    if (!BaseEffect::init()) {
        return false;
    }
	return true;
}