//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ExploreOriginalData.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface EssayData : ExploreOriginalData
{
    NSDictionary *_comment;
    NSArray *_godComments;
    NSString *_content;
    NSNumber *_createTime;
    NSString *_dataURL;
    NSDictionary *_largeImageDict;
    NSDictionary *_middleImageDict;
    NSString *_profileImageURL;
    NSString *_screenName;
    NSNumber *_status;
    NSString *_statusDesc;
}

+ (id)keyMapping;
+ (id)persistentProperties;
+ (id)dbName;
@property(retain, nonatomic) NSString *statusDesc; // @synthesize statusDesc=_statusDesc;
@property(retain, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *screenName; // @synthesize screenName=_screenName;
@property(retain, nonatomic) NSString *profileImageURL; // @synthesize profileImageURL=_profileImageURL;
@property(retain, nonatomic) NSDictionary *middleImageDict; // @synthesize middleImageDict=_middleImageDict;
@property(retain, nonatomic) NSDictionary *largeImageDict; // @synthesize largeImageDict=_largeImageDict;
@property(retain, nonatomic) NSString *dataURL; // @synthesize dataURL=_dataURL;
@property(retain, nonatomic) NSNumber *createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSArray *godComments; // @synthesize godComments=_godComments;
@property(retain, nonatomic) NSDictionary *comment; // @synthesize comment=_comment;
- (void).cxx_destruct;
- (void)removeKVO;
- (void)addKVO;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)godCommentObjArray;
- (id)commentContent;
- (id)middleImageModel;
- (id)largeImageModel;
- (void)dealloc;
- (id)init;
- (void)updateWithDictionary:(id)arg1;

@end

