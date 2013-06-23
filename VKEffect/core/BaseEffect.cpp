//
//  BaseEffect.cpp
//  VKEffectDemo
//
//  Created by Kasajima Yasuo on 2013/06/22.
//  Copyright (c) 2013年 __MyCompanyName__. All rights reserved.
//

#include "BaseEffect.h"

using namespace cocos2d;

BaseEffect::BaseEffect()
{
    _callBack = CCDelayTime::create(0.01);
}

BaseEffect::~BaseEffect()
{
}


float BaseEffect::getAnimationTime(){
    return frameRate*frameCount;
}


bool BaseEffect::init(){
    CCSpriteFrameCache *cache = CCSpriteFrameCache::sharedSpriteFrameCache();
    CCString *plistFileName = CCString::createWithFormat("%s.plist",effectName);
    cache->addSpriteFramesWithFile(plistFileName->getCString());
    CCString *firstFrameName = CCString::createWithFormat("%s_0.png",effectName);
    if ( !CCSprite::initWithSpriteFrameName(firstFrameName->getCString()))
    {
        return false;
    }
    
    ccBlendFunc blendFunc = {GL_SRC_ALPHA,GL_ONE};
    this->setBlendFunc(blendFunc);
    return true;
}

void BaseEffect::effectInPosition(CCPoint point){
    this->setPosition(point);
    CCSpriteFrameCache *cache = CCSpriteFrameCache::sharedSpriteFrameCache();
    CCString *plistFileName = CCString::createWithFormat("%s.plist",effectName);
    cache->addSpriteFramesWithFile(plistFileName->getCString());
    
    CCArray *animFrames = CCArray::create();
    for (int i = 0; i <frameCount; i++) {
        CCString *frameName = CCString::createWithFormat("%s_%d.png",effectName,i);
        CCSpriteFrame* frame = cache->spriteFrameByName( frameName -> getCString());
        animFrames->addObject(frame);
    }
    CCAnimation *animation = CCAnimation::createWithSpriteFrames(animFrames,frameRate);
    CCCallFunc *func = CCCallFunc::create(this, callfunc_selector(CCSprite::removeFromParent));
    CCAction *effectAnimation = CCSequence::create(CCAnimate::create(animation),_callBack,func, NULL);
    this->runAction(effectAnimation);
}

void BaseEffect::effectInCenter(){
    CCSize size = this->getParent()->getContentSize();
    effectInPosition(ccp(size.width*0.5, size.height*0.5));
}

void BaseEffect::effect(){
    effectInPosition(this->getPosition());
}

CCSpriteBatchNode* BaseEffect::getSpriteBatchNode(){
    CCString *spriteSheetName = CCString::createWithFormat("%s.png",effectName);
    CCSpriteBatchNode* spriteBatchNode = CCSpriteBatchNode::create(spriteSheetName->getCString());
    ccBlendFunc blendFunc = {GL_SRC_ALPHA,GL_ONE};
    spriteBatchNode->setBlendFunc(blendFunc);
    return spriteBatchNode;
}

void BaseEffect::setCallBack(CCFiniteTimeAction *callBack){
    _callBack = callBack;
}


