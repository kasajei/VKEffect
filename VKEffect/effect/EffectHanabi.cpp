//
//  EffectFire.cpp
//  VKEffectDemo
//
//  Created by Kasajima Yasuo on 2013/06/22.
//  Copyright (c) 2013年 __MyCompanyName__. All rights reserved.
//

#include "EffectHanabi.h"

using namespace cocos2d;

EffectHanabi::EffectHanabi()
{
    effectName = "hanabi";
    frameCount = 14;
    frameRate = 0.05f;
}

EffectHanabi::~EffectHanabi()
{
}

bool EffectHanabi::init()
{
    
    if (!BaseEffect::init()) {
        return false;
    }
	return true;
}