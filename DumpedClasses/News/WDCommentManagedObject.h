//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableSet, NSNumber, NSString;

@interface WDCommentManagedObject : NSObject
{
    _Bool _needLoadingUpdate;
    _Bool _needLoadingMore;
    NSNumber *_offset;
    NSString *_tabName;
    NSMutableArray *_commentModels;
    NSMutableArray *_lastAppendCommentModels;
    NSMutableSet *_uniqueIDSet;
}

@property(retain, nonatomic) NSMutableSet *uniqueIDSet; // @synthesize uniqueIDSet=_uniqueIDSet;
@property(retain, nonatomic) NSMutableArray *lastAppendCommentModels; // @synthesize lastAppendCommentModels=_lastAppendCommentModels;
@property(retain, nonatomic) NSMutableArray *commentModels; // @synthesize commentModels=_commentModels;
@property(nonatomic) _Bool needLoadingMore; // @synthesize needLoadingMore=_needLoadingMore;
@property(nonatomic) _Bool needLoadingUpdate; // @synthesize needLoadingUpdate=_needLoadingUpdate;
@property(copy, nonatomic) NSString *tabName; // @synthesize tabName=_tabName;
@property(retain, nonatomic) NSNumber *offset; // @synthesize offset=_offset;
- (void).cxx_destruct;
- (void)blockUnblockUserHandler:(id)arg1;
- (id)queryCommentModels;
- (void)resetDatas;
- (void)appendCommentModels:(id)arg1;
- (void)insertCommentModelToTop:(id)arg1;
- (_Bool)deleteModel:(id)arg1;
- (id)init;
- (void)dealloc;

@end

