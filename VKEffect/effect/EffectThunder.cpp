//
//  EffectThunder.cpp
//  VKEffectDemo
//
//  Created by Kasajima Yasuo on 2013/06/22.
//  Copyright (c) 2013年 __MyCompanyName__. All rights reserved.
//

#include "EffectThunder.h"

using namespace cocos2d;

EffectThunder::EffectThunder()
{
    effectName = "thunder";
    frameCount = 8;
    frameRate = 0.07f;
}

EffectThunder::~EffectThunder()
{
}

bool EffectThunder::init()
{
    if (!BaseEffect::init()) {
        return false;
    }
	return true;
}