//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SSActivityView, UIButton;

@protocol SSActivityViewDelegate <NSObject>

@optional
- (void)activityView:(SSActivityView *)arg1 button:(UIButton *)arg2 didCompleteByItemType:(int)arg3;
- (void)activityView:(SSActivityView *)arg1 didCompleteByItemType:(int)arg2;
- (void)activityView:(SSActivityView *)arg1 willCompleteByItemType:(int)arg2;
@end

