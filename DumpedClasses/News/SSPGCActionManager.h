//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SSHttpOperation;

@interface SSPGCActionManager : NSObject
{
    id <SSPGCActionManagerDelegate> _delegate;
    SSHttpOperation *_shareOperation;
    SSHttpOperation *_likeOperation;
    CDUnknownBlockType _likeBlock;
}

@property(copy, nonatomic) CDUnknownBlockType likeBlock; // @synthesize likeBlock=_likeBlock;
@property(retain, nonatomic) SSHttpOperation *likeOperation; // @synthesize likeOperation=_likeOperation;
@property(retain, nonatomic) SSHttpOperation *shareOperation; // @synthesize shareOperation=_shareOperation;
@property(nonatomic) __weak id <SSPGCActionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)likePGCAccount:(id)arg1 isLikeAction:(_Bool)arg2 extraTrack:(id)arg3 likeBlock:(CDUnknownBlockType)arg4;
- (void)unlikePGCAccount:(id)arg1 extraTrack:(id)arg2 likeBlock:(CDUnknownBlockType)arg3;
- (void)likePGCAccount:(id)arg1 extraTrack:(id)arg2 likeBlock:(CDUnknownBlockType)arg3;
- (void)unlikePGCAccount:(id)arg1 likeBlock:(CDUnknownBlockType)arg2;
- (void)likePGCAccount:(id)arg1 likeBlock:(CDUnknownBlockType)arg2;
- (void)changePGCAccount:(id)arg1 likeStatus:(_Bool)arg2 extraTrack:(id)arg3 likeBlock:(CDUnknownBlockType)arg4;
- (void)changePGCAccount:(id)arg1 likeStatus:(_Bool)arg2 likeBlock:(CDUnknownBlockType)arg3;
- (void)operation:(id)arg1 finishedResult:(id)arg2 error:(id)arg3 userInfo:(id)arg4;
- (void)cancel;
- (void)sharePGCUser:(id)arg1 shareMsg:(id)arg2;
- (void)dealloc;

@end

