//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableArray, TTDetailModel, TTDetailWebviewContainer;

@interface TTPhotoDetailTracker : NSObject
{
    _Bool _userHasClickLink;
    TTDetailModel *_detailModel;
    TTDetailWebviewContainer *_detailWebView;
    NSDate *_startLoadDate;
    NSMutableArray *_jumpLinks;
    long long _jumpCount;
    long long _clickLinkCount;
}

@property(nonatomic) long long clickLinkCount; // @synthesize clickLinkCount=_clickLinkCount;
@property(nonatomic) long long jumpCount; // @synthesize jumpCount=_jumpCount;
@property(nonatomic) _Bool userHasClickLink; // @synthesize userHasClickLink=_userHasClickLink;
@property(retain, nonatomic) NSMutableArray *jumpLinks; // @synthesize jumpLinks=_jumpLinks;
@property(retain, nonatomic) NSDate *startLoadDate; // @synthesize startLoadDate=_startLoadDate;
@property(retain, nonatomic) TTDetailWebviewContainer *detailWebView; // @synthesize detailWebView=_detailWebView;
@property(retain, nonatomic) TTDetailModel *detailModel; // @synthesize detailModel=_detailModel;
- (void).cxx_destruct;
- (void)tt_trackTitleBarAdWithTag:(id)arg1 label:(id)arg2 value:(id)arg3 extraDic:(id)arg4;
- (void)tt_trackGalleryWithTag:(id)arg1 label:(id)arg2 appendExtkey:(id)arg3 appendExtValue:(id)arg4;
- (void)tt_sendDetailDeallocTrack:(_Bool)arg1;
- (void)tt_sendDetailLoadTimeOffLeave;
- (void)tt_sendDetailTrackEventWithTag:(id)arg1 label:(id)arg2 extra:(id)arg3;
- (void)tt_sendStayTimeImpresssion;
- (void)tt_sendStartLoadNativeContentForWebTimeoffTrack;
- (void)tt_sendReadTrackWithPCT:(double)arg1 pageCount:(long long)arg2;
- (void)tt_sendJumpEventTrack;
- (void)tt_sendJumpToAppStoreTrackWithReuqestURLStr:(id)arg1 inWhiteList:(_Bool)arg2;
- (void)tt_sendStatStayEventTrack:(long long)arg1 error:(id)arg2;
- (void)tt_sendJumpLinksTrackWithKey:(id)arg1;
- (void)tt_sendStartLoadDateTrackIfNeeded;
- (void)tt_resetStartLoadDate;
- (id)initWithDetailModel:(id)arg1 detailWebView:(id)arg2;

@end

