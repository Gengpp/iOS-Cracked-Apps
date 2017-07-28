//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TTJSONResponseSerializerProtocol.h"

@class NSMutableIndexSet, NSMutableSet, NSSet, NSString;

@interface TTHTTPJSONResponseSerializerBaseChromium : NSObject <TTJSONResponseSerializerProtocol>
{
    NSMutableSet *_acceptableContentTypeSet;
    NSMutableIndexSet *_acceptableStatusCodes;
}

+ (id)serializer;
@property(retain, nonatomic) NSMutableIndexSet *acceptableStatusCodes; // @synthesize acceptableStatusCodes=_acceptableStatusCodes;
@property(retain, nonatomic) NSMutableSet *acceptableContentTypeSet; // @synthesize acceptableContentTypeSet=_acceptableContentTypeSet;
- (void).cxx_destruct;
@property(copy, nonatomic) NSSet *acceptableContentTypes;
- (id)responseObjectForResponse:(id)arg1 jsonObj:(id)arg2 responseError:(id)arg3 resultError:(id *)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

