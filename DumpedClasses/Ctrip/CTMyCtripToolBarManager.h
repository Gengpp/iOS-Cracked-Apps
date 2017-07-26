//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CTImageViewDelegate.h"

@class CTMyCtripToolBarItemModel, NSArray, NSString;

@interface CTMyCtripToolBarManager : NSObject <CTImageViewDelegate>
{
    CDUnknownBlockType _afterGetToolBarData;
    _Bool _dataFetched;
    NSArray *_toolBarItems;
    CTMyCtripToolBarItemModel *_clubModel;
}

@property(retain, nonatomic) CTMyCtripToolBarItemModel *clubModel; // @synthesize clubModel=_clubModel;
@property(retain, nonatomic) NSArray *toolBarItems; // @synthesize toolBarItems=_toolBarItems;
- (void).cxx_destruct;
- (void)netWorkChanged;
- (void)clearData;
- (void)showClubResult:(CDUnknownBlockType)arg1;
- (void)refreshData;
- (void)initData;
- (id)initWithDoBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
