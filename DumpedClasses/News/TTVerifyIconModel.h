//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, NSURL, UIImage;

@interface TTVerifyIconModel : NSObject
{
    UIImage *_image;
    NSString *_imageName;
    NSURL *_imageURL;
    NSURL *_pngImageURL;
    struct CGSize _imageSize;
}

@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) NSURL *pngImageURL; // @synthesize pngImageURL=_pngImageURL;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *logoInfo;

@end

