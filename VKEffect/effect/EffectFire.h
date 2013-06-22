//
//  EffectFire.h
//  VKEffectDemo
//
//  Created by Kasajima Yasuo on 2013/06/22.
//  Copyright (c) 2013年 __MyCompanyName__. All rights reserved.
//

#ifndef VKEffectDemo_EffectFire_
#define VKEffectDemo_EffectFire_

#include "BaseEffect.h"

class EffectFire : public BaseEffect
{

public:
	EffectFire();
	virtual ~EffectFire();
	virtual bool init();
    CREATE_FUNC(EffectFire);
    
protected:
    
};

#endif