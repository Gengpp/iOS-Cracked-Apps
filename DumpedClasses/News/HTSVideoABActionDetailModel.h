//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing.h"

@class NSNumber, NSString;

@interface HTSVideoABActionDetailModel : MTLModel <MTLJSONSerializing>
{
    NSNumber *_enable;
    NSString *_title;
    NSString *_cancel;
    NSString *_confirm;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(readonly, copy, nonatomic) NSString *confirm; // @synthesize confirm=_confirm;
@property(readonly, copy, nonatomic) NSString *cancel; // @synthesize cancel=_cancel;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSNumber *enable; // @synthesize enable=_enable;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

