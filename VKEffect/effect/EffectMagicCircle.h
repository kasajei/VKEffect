//
//  EffectMagicCircle.h
//  VKEffectDemo
//
//  Created by Kasajima Yasuo on 2013/06/22.
//  Copyright (c) 2013年 __MyCompanyName__. All rights reserved.
//

#ifndef VKEffectDemo_EffectMagicCircle_
#define VKEffectDemo_EffectMagicCircle_

#include "BaseEffect.h"

class EffectMagicCircle : public BaseEffect
{

public:
	EffectMagicCircle();
	virtual ~EffectMagicCircle();
	virtual bool init();
    CREATE_FUNC(EffectMagicCircle);
};

#endif