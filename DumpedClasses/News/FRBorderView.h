//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface FRBorderView : UIView
{
    unsigned long long _borderType;
    UIColor *_borderColor;
}

@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) unsigned long long borderType; // @synthesize borderType=_borderType;
- (void).cxx_destruct;
- (_Bool)hasBorderWithType:(unsigned long long)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)borderViewCommonInit;

@end

