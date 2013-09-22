//
//  EffectThunderMagic.h
//  VKEffectDemo
//
//  Created by Kasajima Yasuo on 2013/06/22.
//  Copyright (c) 2013年 __MyCompanyName__. All rights reserved.
//

#ifndef VKEffectDemo_EffectLightMagic_
#define VKEffectDemo_EffectLightMagic_

#include "BaseEffectManager.h"

class EffectLightMagic : public BaseEffectManager
{


public:
	EffectLightMagic();
	virtual ~EffectLightMagic();
    CREATE_FUNC(EffectLightMagic);
    cocos2d::CCFiniteTimeAction* effectDefinition();
    void animation1();
    void animation2();
    void animation3();
};

#endif