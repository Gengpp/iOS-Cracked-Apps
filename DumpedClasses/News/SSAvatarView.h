//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewBase.h"

@class NSString, TTHttpTask, TTVerifyIconImageView, UIButton, UIImage;

@interface SSAvatarView : SSViewBase
{
    _Bool _avatarShowed;
    _Bool _avatarSupportNightModel;
    _Bool _isNightModel;
    unsigned long long _avatarStyle;
    double _avatarImgPadding;
    double _rectangleAvatarImgRadius;
    UIImage *_defaultHeadImg;
    UIImage *_backgroundNormalImage;
    UIImage *_backgroundHightlightImage;
    NSString *_defaultHeadImgName;
    NSString *_backgroundNormalImageName;
    NSString *_backgroundHightlightImageName;
    NSString *_borderColorName;
    UIButton *_avatarButton;
    UIImage *_nightAvatarCoverImage;
    long long _downloadPriority;
    TTHttpTask *_downloadTask;
    NSString *_avatarURLStr;
    UIImage *_needDrawAvatarImage;
    UIImage *_needDrawBackgroundImage;
    struct UIEdgeInsets _marginEdgeInsets;
}

+ (id)createImageWithColor:(id)arg1;
@property(retain, nonatomic) UIImage *needDrawBackgroundImage; // @synthesize needDrawBackgroundImage=_needDrawBackgroundImage;
@property(retain, nonatomic) UIImage *needDrawAvatarImage; // @synthesize needDrawAvatarImage=_needDrawAvatarImage;
@property(retain, nonatomic) NSString *avatarURLStr; // @synthesize avatarURLStr=_avatarURLStr;
@property(retain, nonatomic) TTHttpTask *downloadTask; // @synthesize downloadTask=_downloadTask;
@property(nonatomic) long long downloadPriority; // @synthesize downloadPriority=_downloadPriority;
@property(nonatomic) _Bool isNightModel; // @synthesize isNightModel=_isNightModel;
@property(nonatomic) _Bool avatarSupportNightModel; // @synthesize avatarSupportNightModel=_avatarSupportNightModel;
@property(retain, nonatomic) UIImage *nightAvatarCoverImage; // @synthesize nightAvatarCoverImage=_nightAvatarCoverImage;
@property(retain, nonatomic) UIButton *avatarButton; // @synthesize avatarButton=_avatarButton;
@property(retain, nonatomic) NSString *borderColorName; // @synthesize borderColorName=_borderColorName;
@property(retain, nonatomic) NSString *backgroundHightlightImageName; // @synthesize backgroundHightlightImageName=_backgroundHightlightImageName;
@property(retain, nonatomic) NSString *backgroundNormalImageName; // @synthesize backgroundNormalImageName=_backgroundNormalImageName;
@property(retain, nonatomic) NSString *defaultHeadImgName; // @synthesize defaultHeadImgName=_defaultHeadImgName;
@property(retain, nonatomic) UIImage *backgroundHightlightImage; // @synthesize backgroundHightlightImage=_backgroundHightlightImage;
@property(retain, nonatomic) UIImage *backgroundNormalImage; // @synthesize backgroundNormalImage=_backgroundNormalImage;
@property(retain, nonatomic) UIImage *defaultHeadImg; // @synthesize defaultHeadImg=_defaultHeadImg;
@property(nonatomic) double rectangleAvatarImgRadius; // @synthesize rectangleAvatarImgRadius=_rectangleAvatarImgRadius;
@property(nonatomic) struct UIEdgeInsets marginEdgeInsets; // @synthesize marginEdgeInsets=_marginEdgeInsets;
@property(nonatomic) double avatarImgPadding; // @synthesize avatarImgPadding=_avatarImgPadding;
@property(nonatomic) unsigned long long avatarStyle; // @synthesize avatarStyle=_avatarStyle;
- (void).cxx_destruct;
- (void)refreshBackgroundImg;
- (void)themeChanged:(id)arg1;
- (_Bool)shouldShowImage;
- (void)cancelRequest;
- (_Bool)cached;
- (void)setLocalAvatarImage:(id)arg1;
- (void)downloadImageByURLString:(id)arg1;
- (id)getDownloadQueue;
- (void)showAvatarByURL:(id)arg1;
- (void)showAvatarByURL:(id)arg1 showPriority:(long long)arg2;
- (void)needRedraw;
- (struct CGRect)backgroundDrawRect;
- (id)backgroundDrawPath;
- (id)avatarDrawPath;
- (struct CGRect)avatarDrawRect;
- (void)drawRect:(struct CGRect)arg1;
- (void)avatarButtonClicked:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)showVerifyViewWithVerifyInfo:(id)arg1;
- (void)setupVerifyViewForLength:(double)arg1 adaptationSizeBlock:(CDUnknownBlockType)arg2 adaptationOffsetBlock:(CDUnknownBlockType)arg3;
- (void)setupVerifyViewForLength:(double)arg1 adaptationSizeBlock:(CDUnknownBlockType)arg2;
- (void)hideVerifyView;
- (void)setTt_verticalContraint:(id)arg1;
- (id)tt_verticalContraint;
- (void)setTt_horizontalContraint:(id)arg1;
- (id)tt_horizontalContraint;
- (void)setTt_sizeContraint:(id)arg1;
- (id)tt_sizeContraint;
- (void)setVerifyView:(id)arg1;
@property(readonly, nonatomic) TTVerifyIconImageView *verifyView;

@end

