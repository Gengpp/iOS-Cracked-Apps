//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor, UIImage, UIImageView;

@interface TTImageObserver : NSObject
{
    UIImageView *_originImageView;
    UIImage *_originImage;
    double _cornerRadius;
    unsigned long long _cornerType;
    UIColor *_borderColor;
    double _borderWidth;
}

@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) unsigned long long cornerType; // @synthesize cornerType=_cornerType;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) UIImage *originImage; // @synthesize originImage=_originImage;
@property(nonatomic) UIImageView *originImageView; // @synthesize originImageView=_originImageView;
- (void).cxx_destruct;
- (void)drawBorder:(id)arg1;
- (void)updateBorderCorner;
- (void)updateImageView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithImageView:(id)arg1;
- (void)dealloc;

@end

