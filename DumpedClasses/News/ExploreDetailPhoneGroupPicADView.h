//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ExploreDetailMixedGroupPicADView.h"

@class SSThemedButton;

@interface ExploreDetailPhoneGroupPicADView : ExploreDetailMixedGroupPicADView
{
    SSThemedButton *_callButton;
}

+ (double)heightForADModel:(id)arg1 constrainedToWidth:(double)arg2;
+ (void)load;
@property(retain, nonatomic) SSThemedButton *callButton; // @synthesize callButton=_callButton;
- (void).cxx_destruct;
- (id)dislikeImageName;
- (id)sourceLabel;
- (void)callActionFired;
- (void)layout;
- (void)setAdModel:(id)arg1;
- (id)initWithWidth:(double)arg1;

@end

