//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CCPRequestOperation : NSObject
{
}

- (id)createDeviceId;
- (_Bool)wrapResponse:(id)arg1 request:(id)arg2 response:(id)arg3 error:(id)arg4 oResponse:(id *)arg5 oError:(id *)arg6;
- (void)wrapResponse:(id)arg1 request:(id)arg2 response:(id)arg3 error:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (id)wrapRequest:(id)arg1;
- (void)doAsyncUdpRequest:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (_Bool)doSyncUdpRequest:(id)arg1 response:(id *)arg2 error:(id *)arg3;
- (void)doAsyncTcpRequest:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (_Bool)doSyncTcpRequest:(id)arg1 response:(id *)arg2 error:(id *)arg3;
- (void)doAsyncHttpRequest:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (_Bool)doSyncHttpRequest:(id)arg1 response:(id *)arg2 error:(id *)arg3;

@end

