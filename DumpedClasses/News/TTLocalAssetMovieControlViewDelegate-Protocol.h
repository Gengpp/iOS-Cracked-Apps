//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TTLocalAssetMovieControlView;

@protocol TTLocalAssetMovieControlViewDelegate <NSObject>
- (void)controlView:(TTLocalAssetMovieControlView *)arg1 didSeekToProgress:(double)arg2 totalTime:(double)arg3;
- (void)controlView:(TTLocalAssetMovieControlView *)arg1 isSeekingToProgress:(double)arg2 totalTime:(double)arg3;
- (void)controlViewWillExitFullScreen:(TTLocalAssetMovieControlView *)arg1;
- (void)controlViewDidPressPlayButton:(TTLocalAssetMovieControlView *)arg1;
@end

