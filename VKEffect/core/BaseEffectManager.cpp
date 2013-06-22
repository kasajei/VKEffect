//
//  BaseEffectManager.cpp
//  VKEffectDemo
//
//  Created by Kasajima Yasuo on 2013/06/22.
//  Copyright (c) 2013年 __MyCompanyName__. All rights reserved.
//

#include "BaseEffectManager.h"

USING_NS_CC;
BaseEffectManager::BaseEffectManager()
{
    _callBack = CCDelayTime::create(0.01);
}

BaseEffectManager::~BaseEffectManager()
{
}

bool BaseEffectManager::init()
{
	if (!CCNode::init())
	{
		return false;
	}
	return true;
}

CCFiniteTimeAction* BaseEffectManager::effectDefinition(){
    return CCDelayTime::create(0.01);
}

void BaseEffectManager::endEffect(){
    
}

void BaseEffectManager::effectInPosition(CCPoint point){
    this->setPosition(point);
    CCFiniteTimeAction *effect = this->effectDefinition();
    CCCallFunc *func = CCCallFunc::create(this, callfunc_selector(BaseEffectManager::removeFromParent));
    CCSequence *seq = CCSequence::create(effect,_callBack,func,NULL);
    this->runAction(seq);
}

void BaseEffectManager::effectInCenter(){
    CCSize size = this->getParent()->getContentSize();
    this->effectInPosition(ccp(size.width*0.5, size.height*0.5));
}

void BaseEffectManager::effect(){
    this->effectInPosition(this->getPosition());
}

void BaseEffectManager::setCallBack(cocos2d::CCFiniteTimeAction *callBack){
    _callBack = callBack;
}