#ifndef  PTPLAYERAPPDELEGATE_H
#define  PTPLAYERAPPDELEGATE_H

#include "cocos2d.h"

class  PTPAppDelegate : private cocos2d::CCApplication
{
public:

    PTPAppDelegate();

    virtual ~PTPAppDelegate();

    virtual bool initInstance();
    virtual bool applicationDidFinishLaunching();
    virtual void applicationDidEnterBackground();
    virtual void applicationWillEnterForeground();


};

#endif // PTPLAYERAPPDELEGATE_H

