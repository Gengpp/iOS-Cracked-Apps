//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing.h"

@class NSArray, NSString;

@interface HTSVideoItemVideoDynamicCoverModel : MTLModel <MTLJSONSerializing>
{
    NSString *_uri;
    NSArray *_urlList;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSArray *urlList; // @synthesize urlList=_urlList;
@property(readonly, nonatomic) NSString *uri; // @synthesize uri=_uri;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

