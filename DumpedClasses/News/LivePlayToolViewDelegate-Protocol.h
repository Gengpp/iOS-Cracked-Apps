//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LivePlayToolView, UIButton;

@protocol LivePlayToolViewDelegate <NSObject>
- (void)playToolView:(LivePlayToolView *)arg1 didClickFullscreenButton:(UIButton *)arg2;
- (void)playToolView:(LivePlayToolView *)arg1 didClickScreenShotButton:(UIButton *)arg2;
- (void)playToolView:(LivePlayToolView *)arg1 didClickGiftButton:(UIButton *)arg2;
@end

