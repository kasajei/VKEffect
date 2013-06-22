//
//  EffectFire.cpp
//  VKEffectDemo
//
//  Created by Kasajima Yasuo on 2013/06/22.
//  Copyright (c) 2013年 __MyCompanyName__. All rights reserved.
//

#include "EffectFire.h"

using namespace cocos2d;

EffectFire::EffectFire()
{
    effectName = "fire";
    frameCount = 10;
    frameRate = 0.05f;
}

EffectFire::~EffectFire()
{
}

bool EffectFire::init()
{
    
    if (!BaseEffect::init()) {
        return false;
    }
	return true;
}