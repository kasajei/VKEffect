#include "HelloWorldScene.h"
#include "SimpleAudioEngine.h"
#include "EffectFire.h"
#include "EffectHanabi.h"
#include "EffectFires.h"
#include "EffectMagicCircle.h"
#include "EffectThunder.h"
#include "EffectThunderMagic.h"
#include "EffectLightMagic.h"
#include "EffectLight.h"
#include "EffectLightSmall.h"

using namespace cocos2d;
using namespace CocosDenshion;

CCScene* HelloWorld::scene()
{
    // 'scene' is an autorelease object
    CCScene *scene = CCScene::create();
    
    // 'layer' is an autorelease object
    HelloWorld *layer = HelloWorld::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !CCLayer::init() )
    {
        return false;
    }

    
    /////////////////////////////
    // 2. add a menu item with "X" image, which is clicked to quit the program
    //    you may modify it.

    // add a "close" icon to exit the progress. it's an autorelease object
    CCMenuItemImage *pCloseItem = CCMenuItemImage::create(
                                        "CloseNormal.png",
                                        "CloseSelected.png",
                                        this,
                                        menu_selector(HelloWorld::menuCloseCallback) );
    pCloseItem->setPosition( ccp(CCDirector::sharedDirector()->getWinSize().width - 20, 20) );

    // create menu, it's an autorelease object
    CCMenu* pMenu = CCMenu::create(pCloseItem, NULL);
    pMenu->setPosition( CCPointZero );
    this->addChild(pMenu, 1);

    /////////////////////////////
    // 3. add your codes below...

    // add a label shows "Hello World"
    // create and initialize a label
    CCLabelTTF* pLabel = CCLabelTTF::create("Hello World", "Thonburi", 34);

    // ask director the window size
    CCSize size = CCDirector::sharedDirector()->getWinSize();

    // position the label on the center of the screen
    pLabel->setPosition( ccp(size.width / 2, size.height - 20) );

    // add the label as a child to this layer
    this->addChild(pLabel, 1);
    
    // enable touch
    this->setTouchEnabled(true);
    
    return true;
}

void HelloWorld::menuCloseCallback(CCObject* pSender)
{
    CCDirector::sharedDirector()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}


#pragma mark - touch
void HelloWorld::registerWithTouchDispatcher()
{
    CCDirector::sharedDirector()->getTouchDispatcher()->addTargetedDelegate(this,-127,true);
}

bool HelloWorld::ccTouchBegan(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent){
    return true;
}

void HelloWorld::ccTouchEnded(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent){
    CCLog("touch");
    this->removeAllChildren();
    effectIn(pTouch->getLocation());
}


#pragma mark - effect
void HelloWorld::effectIn(CCPoint point){
    this->point = point;
    // create call back function
    CCSequence *seq = CCSequence::create(CCCallFunc::create(this, callfunc_selector(HelloWorld::callBack)),NULL);
    BaseEffectManager *effect = EffectLightMagic::create();
    effect->setScale(0.5);
//    BaseEffect *effect = EffectLightSmall::create();
    this->addChild(effect);
    effect->setCallBack(seq);
    effect->effectInPosition(point);
    
    
}

void HelloWorld::callBack(){
    sprite = CCSprite::create("sraim.png");
    sprite->setPosition(ccp(point.x, point.y +
                            sprite->getContentSize().height * 0.5));
    this->addChild(sprite);
    CCLOG("callback");
}



