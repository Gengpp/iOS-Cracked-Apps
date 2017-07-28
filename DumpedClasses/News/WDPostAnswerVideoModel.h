//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString<Optional>;

@interface WDPostAnswerVideoModel : JSONModel <NSCoding, NSCopying>
{
    NSString<Optional> *_localCoverUrl;
    NSString<Optional> *_onlineCoverUrl;
    NSString<Optional> *_videoId;
    NSString<Optional> *_videoUrl;
}

@property(copy, nonatomic) NSString<Optional> *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(copy, nonatomic) NSString<Optional> *videoId; // @synthesize videoId=_videoId;
@property(copy, nonatomic) NSString<Optional> *onlineCoverUrl; // @synthesize onlineCoverUrl=_onlineCoverUrl;
@property(copy, nonatomic) NSString<Optional> *localCoverUrl; // @synthesize localCoverUrl=_localCoverUrl;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

