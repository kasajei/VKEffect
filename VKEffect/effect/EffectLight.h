//
//  EffectThunder.h
//  VKEffectDemo
//
//  Created by Kasajima Yasuo on 2013/06/22.
//  Copyright (c) 2013年 __MyCompanyName__. All rights reserved.
//

#ifndef VKEffectDemo_EffectLight_
#define VKEffectDemo_EffectLight_

#include "BaseEffect.h"

class EffectLight : public BaseEffect
{
public:
	EffectLight();
	virtual ~EffectLight();
	virtual bool init();
    CREATE_FUNC(EffectLight)
};

#endif