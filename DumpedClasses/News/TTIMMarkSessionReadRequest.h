//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTRequestMessage.h"

@class NSArray;

@interface TTIMMarkSessionReadRequest : TTRequestMessage
{
    NSArray *_markSessionsReadList;
}

@property(retain, nonatomic) NSArray *markSessionsReadList; // @synthesize markSessionsReadList=_markSessionsReadList;
- (void).cxx_destruct;
- (id)encode;
- (void)bindMarkSessioinReadList:(id)arg1;
- (id)init;

@end

