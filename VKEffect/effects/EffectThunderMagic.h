//
//  EffectThunderMagic.h
//  VKEffectDemo
//
//  Created by Kasajima Yasuo on 2013/06/22.
//  Copyright (c) 2013年 __MyCompanyName__. All rights reserved.
//

#ifndef VKEffectDemo_EffectThunderMagic_
#define VKEffectDemo_EffectThunderMagic_

#include "BaseEffectManager.h"

class EffectThunderMagic : public BaseEffectManager
{


public:
	EffectThunderMagic();
	virtual ~EffectThunderMagic();
    CREATE_FUNC(EffectThunderMagic);
    cocos2d::CCFiniteTimeAction* effectDefinition();
    void animation1();
    void animation2();
    void animation3();
};

#endif