//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ALBBAuthReturnInfoData, NSNumber, NSString;

@interface ALBBAuthReturnInfo : NSObject
{
    NSNumber *_code;
    NSString *_message;
    ALBBAuthReturnInfoData *_data;
}

@property(retain, nonatomic) ALBBAuthReturnInfoData *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSNumber *code; // @synthesize code=_code;
- (void).cxx_destruct;

@end

