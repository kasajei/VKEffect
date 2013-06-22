//
//  EffectMagicCircle.cpp
//  VKEffectDemo
//
//  Created by Kasajima Yasuo on 2013/06/22.
//  Copyright (c) 2013年 __MyCompanyName__. All rights reserved.
//

#include "EffectMagicCircle.h"

using namespace cocos2d;

EffectMagicCircle::EffectMagicCircle()
{
    effectName = "magicCircle";
    frameCount = 11;
    frameRate = 0.05f;
}

EffectMagicCircle::~EffectMagicCircle()
{
}

bool EffectMagicCircle::init()
{
    if (!BaseEffect::init()) {
        return false;
    }
	return true;
}