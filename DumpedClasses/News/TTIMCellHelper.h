//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TTIMCellHelper : NSObject
{
}

+ (void)maskMediaView:(id)arg1;
+ (struct CGSize)adjustedImageSizeFromSourceSize:(struct CGSize)arg1;
+ (id)thumbImageFromSourceImage:(id)arg1;
+ (struct CGSize)sizeOfText:(id)arg1 withMaxWidth:(double)arg2 font:(id)arg3 lineHeight:(double)arg4 numberOfLines:(double)arg5;
+ (struct CGSize)sizeOfText:(id)arg1 withMaxWidth:(double)arg2 font:(id)arg3 lineHeight:(double)arg4;
+ (id)createLabelWithFontSize:(double)arg1 textColor:(id)arg2;
+ (double)cellHeightWithMessage:(id)arg1;
+ (struct CGSize)sizeOfBubbleContainerViewWithMessage:(id)arg1;
+ (struct CGSize)textSizeWithMessage:(id)arg1;

@end

