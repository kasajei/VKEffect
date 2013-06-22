//
//  EffectHanabi.h
//  VKEffectDemo
//
//  Created by Kasajima Yasuo on 2013/06/22.
//  Copyright (c) 2013年 __MyCompanyName__. All rights reserved.
//

#ifndef VKEffectDemo_EffectHanabi_
#define VKEffectDemo_EffectHanabi_

#include "BaseEffect.h"

class EffectHanabi : public BaseEffect
{

public:
	EffectHanabi();
	virtual ~EffectHanabi();
	virtual bool init();
    CREATE_FUNC(EffectHanabi);
};

#endif