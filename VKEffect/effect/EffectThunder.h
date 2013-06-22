//
//  EffectThunder.h
//  VKEffectDemo
//
//  Created by Kasajima Yasuo on 2013/06/22.
//  Copyright (c) 2013年 __MyCompanyName__. All rights reserved.
//

#ifndef VKEffectDemo_EffectThunder_
#define VKEffectDemo_EffectThunder_

#include "BaseEffect.h"

class EffectThunder : public BaseEffect
{
public:
	EffectThunder();
	virtual ~EffectThunder();
	virtual bool init();
    CREATE_FUNC(EffectThunder)
};

#endif