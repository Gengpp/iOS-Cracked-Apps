//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIPasteboard;

@interface APOpenAPIConveyancer : NSObject
{
    UIPasteboard *_pasteboard;
    UIPasteboard *_openPasteboard;
}

+ (id)shareConveyancer;
@property(retain, nonatomic) UIPasteboard *openPasteboard; // @synthesize openPasteboard=_openPasteboard;
@property(retain, nonatomic) UIPasteboard *pasteboard; // @synthesize pasteboard=_pasteboard;
- (void).cxx_destruct;
- (id)registerApps;
- (_Bool)registerApp:(id)arg1;
- (id)apOpenAPIPasteboardRegisterAppsType;
- (id)apResponseApp:(id)arg1;
- (id)apResponse:(id)arg1;
- (_Bool)setAPResponse:(id)arg1 app:(id)arg2;
- (id)apOpenAPIPasteboardResponseType:(id)arg1;
- (id)apRequestApp:(id)arg1;
- (id)apRequest:(id)arg1;
- (_Bool)setAPRequest:(id)arg1 app:(id)arg2;
- (id)apOpenAPIPasteboardRequestType:(id)arg1;
- (id)init;

@end

