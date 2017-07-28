//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class NSArray, RCTBridge, RCTImageSource, UIImage;

@interface RCTImageView : UIImageView
{
    RCTBridge *_bridge;
    RCTImageSource *_imageSource;
    RCTImageSource *_pendingImageSource;
    struct CGSize _targetSize;
    CDUnknownBlockType _reloadImageCancellationBlock;
    UIImage *_defaultImage;
    long long _renderingMode;
    NSArray *_imageSources;
    double _blurRadius;
    long long _resizeMode;
    CDUnknownBlockType _onLoadStart;
    CDUnknownBlockType _onProgress;
    CDUnknownBlockType _onError;
    CDUnknownBlockType _onPartialLoad;
    CDUnknownBlockType _onLoad;
    CDUnknownBlockType _onLoadEnd;
    struct UIEdgeInsets _capInsets;
}

@property(copy, nonatomic) CDUnknownBlockType onLoadEnd; // @synthesize onLoadEnd=_onLoadEnd;
@property(copy, nonatomic) CDUnknownBlockType onLoad; // @synthesize onLoad=_onLoad;
@property(copy, nonatomic) CDUnknownBlockType onPartialLoad; // @synthesize onPartialLoad=_onPartialLoad;
@property(copy, nonatomic) CDUnknownBlockType onError; // @synthesize onError=_onError;
@property(copy, nonatomic) CDUnknownBlockType onProgress; // @synthesize onProgress=_onProgress;
@property(copy, nonatomic) CDUnknownBlockType onLoadStart; // @synthesize onLoadStart=_onLoadStart;
@property(nonatomic) long long resizeMode; // @synthesize resizeMode=_resizeMode;
@property(nonatomic) double blurRadius; // @synthesize blurRadius=_blurRadius;
@property(copy, nonatomic) NSArray *imageSources; // @synthesize imageSources=_imageSources;
@property(nonatomic) long long renderingMode; // @synthesize renderingMode=_renderingMode;
@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(nonatomic) struct UIEdgeInsets capInsets; // @synthesize capInsets=_capInsets;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)reactSetFrame:(struct CGRect)arg1;
- (void)imageLoaderLoadedImage:(id)arg1 error:(id)arg2 forImageSource:(id)arg3 partial:(_Bool)arg4;
- (void)reloadImage;
- (_Bool)shouldChangeImageSource;
- (_Bool)shouldReloadImageSourceAfterResize;
- (id)imageSourceForSize:(struct CGSize)arg1;
- (_Bool)hasMultipleSources;
- (void)clearImageIfDetached;
- (void)clearImage;
- (void)cancelImageLoad;
- (void)setImage:(id)arg1;
- (void)updateWithImage:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)initWithBridge:(id)arg1;

@end

