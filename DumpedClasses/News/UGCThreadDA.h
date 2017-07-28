//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTDataAdapter.h"

@interface UGCThreadDA : TTDataAdapter
{
    unsigned long long _listType;
}

+ (id)DAKeyMap;
+ (id)userIdDATransformer;
+ (id)forwardedOriginDelDATransformer;
+ (id)forwardedStatusTipsDATransformer;
+ (id)showReadUIDATransformer;
+ (id)interactionInfoDATransformer;
+ (id)forwardButtonTitleDATransformer;
+ (id)commentButtonTitleDATransformer;
+ (id)diggButtonTitleDATransformer;
@property(nonatomic) unsigned long long listType; // @synthesize listType=_listType;
- (id)recommendReasonRichText:(id)arg1;
- (id)forwardLargeImageList:(id)arg1;
- (id)forwardThumbImageList:(id)arg1;
- (id)largeImageList:(id)arg1;
- (id)thumbImageList:(id)arg1;
- (id)webpageImageModel:(id)arg1;
- (id)webpageHasVideo:(id)arg1;
- (id)webpageTitle:(id)arg1;
- (id)forwardContentRichText:(id)arg1;
- (id)contentRichText:(id)arg1;
- (id)forwardLocation:(id)arg1;
- (id)location:(id)arg1;
- (id)topSecondStr:(id)arg1;
- (id)DAConvertKeys;
- (Class)viewDataClass;
- (Class)metaDataClass;
- (id)initWithMetaData:(id)arg1;

@end

