//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TTTestModule.h"

@class NSDictionary, NSString;

@interface TTTestCommonLogicModule : NSObject <TTTestModule>
{
    NSDictionary *_setting;
}

+ (void)swizzle_method;
+ (id)shareModule;
+ (void)configWith:(id)arg1;
@property(retain, nonatomic) NSDictionary *setting; // @synthesize setting=_setting;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

