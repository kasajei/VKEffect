//
//  EffectThunder.cpp
//  VKEffectDemo
//
//  Created by Kasajima Yasuo on 2013/06/22.
//  Copyright (c) 2013年 __MyCompanyName__. All rights reserved.
//

#include "EffectLightSmall.h"

using namespace cocos2d;

EffectLightSmall::EffectLightSmall()
{
    effectName = "lightSmall";
    frameCount = 10;
    frameRate = 0.085f;
}

EffectLightSmall::~EffectLightSmall()
{
}

bool EffectLightSmall::init()
{
    if (!BaseEffect::init()) {
        return false;
    }
	return true;
}