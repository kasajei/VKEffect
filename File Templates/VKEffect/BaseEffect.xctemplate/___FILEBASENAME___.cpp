//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//  Copyright ___YEAR___ ___ORGANIZATIONNAME___. All rights reserved.
//

#include "___FILEBASENAME___.h"

using namespace cocos2d;

___FILEBASENAME___::___FILEBASENAME___()
{
#warning TODO: edit
    effectName = "";
    frameCount = 10;
    frameRate = 0.05f;
}

___FILEBASENAME___::~___FILEBASENAME___()
{
}

bool ___FILEBASENAME___::init()
{
	if ( !BaseEffect::init() )
	{
		return false;
	}
    
	return true;
}

