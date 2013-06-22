//
//  EffectMokusei.h
//  VKEffectDemo
//
//  Created by Kasajima Yasuo on 2013/06/22.
//  Copyright (c) 2013年 __MyCompanyName__. All rights reserved.
//

#ifndef VKEffectDemo_EffectMokusei_
#define VKEffectDemo_EffectMokusei_

#include "BaseEffect.h"

class EffectMokusei : public BaseEffect
{

public:
	EffectMokusei();
	virtual ~EffectMokusei();
	virtual bool init();
    CREATE_FUNC(EffectMokusei)
};

#endif