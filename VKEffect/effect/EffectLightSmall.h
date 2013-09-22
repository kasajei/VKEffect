//
//  EffectThunder.h
//  VKEffectDemo
//
//  Created by Kasajima Yasuo on 2013/06/22.
//  Copyright (c) 2013年 __MyCompanyName__. All rights reserved.
//

#ifndef VKEffectDemo_EffectLightSmall_
#define VKEffectDemo_EffectLightSmall_

#include "BaseEffect.h"

class EffectLightSmall : public BaseEffect
{
public:
	EffectLightSmall();
	virtual ~EffectLightSmall();
	virtual bool init();
    CREATE_FUNC(EffectLightSmall)
};

#endif