//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TTPersonalHomeHeaderView;

@protocol TTPersonalHomeHeaderViewDelegate <NSObject>

@optional
- (void)headerView:(TTPersonalHomeHeaderView *)arg1 didSelectedIntroduceSpreadOut:(_Bool)arg2;
- (void)headerView:(TTPersonalHomeHeaderView *)arg1 didSelectedFollowSpreadOut:(_Bool)arg2;
- (void)headerViewDidSelectedStar;
- (void)headerViewDidSelectedCertification;
- (void)headerViewDidSelectedPrivateMessage;
- (void)headerViewDidSelectedIconView;
- (void)headerViewDidSelectedProfile;
- (void)headerViewDidSelectedUnBlock;
- (void)headerViewDidSelectedCancelFollow;
- (void)headerViewDidSelectedFollow;
@end

