//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WDBaseModel.h"

@class NSString, NSString<Optional>;

@interface WDShareStructModel : WDBaseModel
{
    NSString *_title;
    NSString *_content;
    NSString<Optional> *_image_url;
    NSString *_share_url;
}

@property(retain, nonatomic) NSString *share_url; // @synthesize share_url=_share_url;
@property(retain, nonatomic) NSString<Optional> *image_url; // @synthesize image_url=_image_url;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

