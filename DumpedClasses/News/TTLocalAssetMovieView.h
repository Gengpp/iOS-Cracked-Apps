//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TTMovieFullscreenProtocol.h"
#import "TTVideoRotateViewProtocol.h"

@class NSIndexPath, NSString, TTAVMoviePlayerController, TTLocalAssetMovieControlView, UITableView;

@interface TTLocalAssetMovieView : UIView <TTMovieFullscreenProtocol, TTVideoRotateViewProtocol>
{
    _Bool _hasMovieFatherCell;
    UITableView *_movieFatherCellTableView;
    NSIndexPath *_movieFatherCellIndexPath;
    UIView *_movieFatherView;
    UITableView *_baseTableView;
    NSIndexPath *_indexPath;
    UIView *_rotateSuperView;
    TTAVMoviePlayerController *_moviePlayer;
    TTLocalAssetMovieControlView *_controlView;
    CDUnknownBlockType _stopMovieBlock;
    struct CGRect _movieInFatherViewFrame;
    struct CGRect _rotateViewRect;
}

@property(copy, nonatomic) CDUnknownBlockType stopMovieBlock; // @synthesize stopMovieBlock=_stopMovieBlock;
@property(retain, nonatomic) TTLocalAssetMovieControlView *controlView; // @synthesize controlView=_controlView;
@property(retain, nonatomic) TTAVMoviePlayerController *moviePlayer; // @synthesize moviePlayer=_moviePlayer;
@property(nonatomic) __weak UIView *rotateSuperView; // @synthesize rotateSuperView=_rotateSuperView;
@property(nonatomic) struct CGRect rotateViewRect; // @synthesize rotateViewRect=_rotateViewRect;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) __weak UITableView *baseTableView; // @synthesize baseTableView=_baseTableView;
@property(nonatomic) struct CGRect movieInFatherViewFrame; // @synthesize movieInFatherViewFrame=_movieInFatherViewFrame;
@property(nonatomic) __weak UIView *movieFatherView; // @synthesize movieFatherView=_movieFatherView;
@property(copy, nonatomic) NSIndexPath *movieFatherCellIndexPath; // @synthesize movieFatherCellIndexPath=_movieFatherCellIndexPath;
@property(nonatomic) __weak UITableView *movieFatherCellTableView; // @synthesize movieFatherCellTableView=_movieFatherCellTableView;
@property(nonatomic) _Bool hasMovieFatherCell; // @synthesize hasMovieFatherCell=_hasMovieFatherCell;
- (void).cxx_destruct;
- (void)forceStop;
- (void)forceStoppingMovie;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

