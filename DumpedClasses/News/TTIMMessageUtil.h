//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TTIMMessageUtil : NSObject
{
}

+ (id)lastMsgFromArray:(id)arg1 isServer:(_Bool)arg2;
+ (_Bool)isPersonChat:(id)arg1;
+ (id)getSessionNameFromMsg:(id)arg1;
+ (id)createPersonChatMsg:(id)arg1 msgType:(int)arg2 content:(id)arg3;
+ (id)sharedInstance;

@end

