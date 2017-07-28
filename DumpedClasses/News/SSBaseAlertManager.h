//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIAlertViewDelegate.h"

@class NSMutableArray, NSString, NSTimer, SSHttpOperation;

@interface SSBaseAlertManager : NSObject <UIAlertViewDelegate>
{
    _Bool _isConcurrency;
    NSMutableArray *_alertModels;
    CDUnknownBlockType _shouldAlertBlock;
    SSHttpOperation *_alertOperation;
    NSTimer *_delayRequestTimer;
}

+ (id)alertManager;
@property(retain, nonatomic) NSTimer *delayRequestTimer; // @synthesize delayRequestTimer=_delayRequestTimer;
@property(retain, nonatomic) SSHttpOperation *alertOperation; // @synthesize alertOperation=_alertOperation;
@property(copy, nonatomic) CDUnknownBlockType shouldAlertBlock; // @synthesize shouldAlertBlock=_shouldAlertBlock;
@property(nonatomic) _Bool isConcurrency; // @synthesize isConcurrency=_isConcurrency;
@property(retain, nonatomic) NSMutableArray *alertModels; // @synthesize alertModels=_alertModels;
- (void).cxx_destruct;
- (void)requestAlert;
- (void)operation:(id)arg1 result:(id)arg2 error:(id)arg3 userInfo:(id)arg4;
- (void)clickedButtonAtIndex:(long long)arg1 alertModel:(id)arg2;
- (void)handleError:(id)arg1;
- (id)handleAlert:(id)arg1;
- (id)parameterDict;
- (id)urlPrefix;
- (void)startAlertAfterDelay:(double)arg1 concurrency:(_Bool)arg2;
- (void)startAlert;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

