//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WDDetailModel;

@interface WDDetailViewModel : NSObject
{
    WDDetailModel *_detailModel;
}

@property(retain, nonatomic) WDDetailModel *detailModel; // @synthesize detailModel=_detailModel;
- (void).cxx_destruct;
- (id)person;
- (_Bool)isAuthor;
- (void)tt_setArticleHasRead;
- (void)p_updateModelWithData:(id)arg1;
- (id)initWithDetailModel:(id)arg1;
- (void)dealloc;
- (id)tt_nativeContentFilePath;
- (id)tt_nativeContentHTMLForWebView:(id)arg1;

@end

