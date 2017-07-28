//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSLock, NSMutableArray, NSObject<OS_dispatch_queue>, TTHttpTask;

@interface GiftDisplayViewModel : NSObject
{
    _Bool _appStartupGetLiveGiftModel;
    _Bool _allowSendGiftFlag;
    unsigned long long _totalNumPage;
    NSMutableArray *_liveGiftModelArray;
    NSMutableArray *_downloadGiftModelArray;
    NSMutableArray *_defaultLiveGiftModelArray;
    NSDictionary *_giftDic;
    TTHttpTask *_task;
    CDUnknownBlockType _getGiftListBlock;
    CDUnknownBlockType _sendGiftSuccessBlock;
    CDUnknownBlockType _sendGiftFailedBlock;
    NSLock *_lock;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_archiveSerialQueue;
}

+ (double)horizontalSpaceBetweenGift;
+ (id)shareInstance;
+ (unsigned long long)widthPerGift;
+ (unsigned long long)columnPerPage;
+ (unsigned long long)rowPerPage;
+ (double)getWidthPerGift;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *archiveSerialQueue; // @synthesize archiveSerialQueue=_archiveSerialQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(nonatomic) _Bool allowSendGiftFlag; // @synthesize allowSendGiftFlag=_allowSendGiftFlag;
@property(copy, nonatomic) CDUnknownBlockType sendGiftFailedBlock; // @synthesize sendGiftFailedBlock=_sendGiftFailedBlock;
@property(copy, nonatomic) CDUnknownBlockType sendGiftSuccessBlock; // @synthesize sendGiftSuccessBlock=_sendGiftSuccessBlock;
@property(copy, nonatomic) CDUnknownBlockType getGiftListBlock; // @synthesize getGiftListBlock=_getGiftListBlock;
@property(retain, nonatomic) TTHttpTask *task; // @synthesize task=_task;
@property(retain, nonatomic) NSDictionary *giftDic; // @synthesize giftDic=_giftDic;
@property(retain, nonatomic) NSMutableArray *defaultLiveGiftModelArray; // @synthesize defaultLiveGiftModelArray=_defaultLiveGiftModelArray;
@property(retain, nonatomic) NSMutableArray *downloadGiftModelArray; // @synthesize downloadGiftModelArray=_downloadGiftModelArray;
@property(retain, nonatomic) NSMutableArray *liveGiftModelArray; // @synthesize liveGiftModelArray=_liveGiftModelArray;
@property(nonatomic) unsigned long long totalNumPage; // @synthesize totalNumPage=_totalNumPage;
@property(nonatomic) _Bool appStartupGetLiveGiftModel; // @synthesize appStartupGetLiveGiftModel=_appStartupGetLiveGiftModel;
- (void).cxx_destruct;
- (void)downloadImage:(id)arg1 uri:(id)arg2 imageView:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)downLoadGiftImageWithModel:(id)arg1 giftId:(unsigned long long)arg2 imageView:(id)arg3;
- (id)defaultImgNameFromGiftId:(unsigned long long)arg1;
- (id)unarchiveFromStandardUserDefaults;
- (void)archiveStandardUserDefaults;
- (void)downLoadGift;
- (void)handleResult:(id)arg1 error:(id)arg2 userInfo:(id)arg3;
- (id)getModeInfo:(id)arg1 params:(id)arg2 userInfo:(id)arg3 retryCount:(int)arg4;
- (void)sendGift:(unsigned long long)arg1 roomID:(id)arg2;
- (void)getGiftListUrlInfo;
- (struct CGPoint)getCGPointFromIndex:(unsigned long long)arg1;
- (unsigned long long)getPageIndexFromIndex:(unsigned long long)arg1;
- (_Bool)isBigGift:(unsigned long long)arg1;
- (_Bool)getallowRepeatFromIndex:(unsigned long long)arg1;
- (_Bool)getRepeatFlagFromGiftID:(unsigned long long)arg1;
- (id)getGiftDescripeFromGiftID:(unsigned long long)arg1;
- (id)getMessageImageFromGiftID:(unsigned long long)arg1;
- (id)getMessageIconFromGiftID:(unsigned long long)arg1;
- (id)getUIImageFromGiftID:(unsigned long long)arg1;
- (id)getGiftIconFromGiftID:(unsigned long long)arg1;
- (unsigned long long)getDiamondFromGiftID:(unsigned long long)arg1;
- (unsigned long long)getPriceFromIndex:(unsigned long long)arg1;
- (id)getLiveImageModelFromIndex:(unsigned long long)arg1;
- (id)getImageNameFromIndex:(unsigned long long)arg1;
- (long long)getGiftIDFromIndex:(unsigned long long)arg1;
- (id)getLiveGiftModelFromGiftID:(unsigned long long)arg1;
- (void)setAllowSendGiftFlag;
- (id)totalNumGift;
- (id)init;
- (id)buildDefaultLiveGiftModelArray;

@end

