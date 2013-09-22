//
//  EffectThunder.cpp
//  VKEffectDemo
//
//  Created by Kasajima Yasuo on 2013/06/22.
//  Copyright (c) 2013年 __MyCompanyName__. All rights reserved.
//

#include "EffectLight.h"

using namespace cocos2d;

EffectLight::EffectLight()
{
    effectName = "light";
    frameCount = 10;
    frameRate = 0.12f;
}

EffectLight::~EffectLight()
{
}

bool EffectLight::init()
{
    if (!BaseEffect::init()) {
        return false;
    }
	return true;
}