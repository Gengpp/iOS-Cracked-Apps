//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTNetworkManager.h"

@class TTNetworkHTTPClient;

@interface TTNetworkManagerAFNetworking : TTNetworkManager
{
    TTNetworkHTTPClient *_binaryClient;
    TTNetworkHTTPClient *_jsonModelClient;
}

+ (id)shareInstance;
@property(retain, nonatomic) TTNetworkHTTPClient *jsonModelClient; // @synthesize jsonModelClient=_jsonModelClient;
@property(retain, nonatomic) TTNetworkHTTPClient *binaryClient; // @synthesize binaryClient=_binaryClient;
- (void).cxx_destruct;
- (void)enableVerboseLog;
- (id)downloadTaskWithRequest:(id)arg1 parameters:(id)arg2 headerField:(id)arg3 needCommonParams:(_Bool)arg4 progress:(id *)arg5 destination:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (id)synchronizedRequstForURL:(id)arg1 method:(id)arg2 headerField:(id)arg3 jsonObjParams:(id)arg4 needCommonParams:(_Bool)arg5 needResponse:(_Bool)arg6 needEncrypt:(_Bool)arg7 needContentEncodingAfterEncrypt:(_Bool)arg8;
- (id)synchronizedRequstForURL:(id)arg1 method:(id)arg2 headerField:(id)arg3 jsonObjParams:(id)arg4 needCommonParams:(_Bool)arg5 needResponse:(_Bool)arg6 needEncrypt:(_Bool)arg7;
- (id)synchronizedRequstForURL:(id)arg1 method:(id)arg2 headerField:(id)arg3 jsonObjParams:(id)arg4 needCommonParams:(_Bool)arg5;
- (id)synchronizedRequstForURL:(id)arg1 method:(id)arg2 headerField:(id)arg3 jsonObjParams:(id)arg4 needCommonParams:(_Bool)arg5 needResponse:(_Bool)arg6;
- (id)synchronizedRequstForURL:(id)arg1 method:(id)arg2 headerField:(id)arg3 jsonObjParams:(id)arg4 needCommonParams:(_Bool)arg5 needEncrypt:(_Bool)arg6;
- (id)uploadWithResponse:(id)arg1 parameters:(id)arg2 headerField:(id)arg3 constructingBodyWithBlock:(CDUnknownBlockType)arg4 progress:(id *)arg5 needcommonParams:(_Bool)arg6 requestSerializer:(Class)arg7 responseSerializer:(Class)arg8 autoResume:(_Bool)arg9 callback:(CDUnknownBlockType)arg10;
- (id)uploadWithURL:(id)arg1 parameters:(id)arg2 headerField:(id)arg3 constructingBodyWithBlock:(CDUnknownBlockType)arg4 progress:(id *)arg5 needcommonParams:(_Bool)arg6 requestSerializer:(Class)arg7 responseSerializer:(Class)arg8 autoResume:(_Bool)arg9 callback:(CDUnknownBlockType)arg10;
- (id)uploadWithURL:(id)arg1 headerField:(id)arg2 parameters:(id)arg3 constructingBodyWithBlock:(CDUnknownBlockType)arg4 progress:(id *)arg5 needcommonParams:(_Bool)arg6 callback:(CDUnknownBlockType)arg7;
- (id)uploadWithURL:(id)arg1 parameters:(id)arg2 constructingBodyWithBlock:(CDUnknownBlockType)arg3 progress:(id *)arg4 needcommonParams:(_Bool)arg5 callback:(CDUnknownBlockType)arg6;
- (id)requestForBinaryWithResponse:(id)arg1 params:(id)arg2 method:(id)arg3 needCommonParams:(_Bool)arg4 requestSerializer:(Class)arg5 responseSerializer:(Class)arg6 autoResume:(_Bool)arg7 callback:(CDUnknownBlockType)arg8;
- (id)requestForBinaryWithURL:(id)arg1 params:(id)arg2 method:(id)arg3 needCommonParams:(_Bool)arg4 requestSerializer:(Class)arg5 responseSerializer:(Class)arg6 autoResume:(_Bool)arg7 callback:(CDUnknownBlockType)arg8;
- (id)requestForBinaryWithResponse:(id)arg1 params:(id)arg2 method:(id)arg3 needCommonParams:(_Bool)arg4 headerField:(id)arg5 requestSerializer:(Class)arg6 responseSerializer:(Class)arg7 progress:(id *)arg8 callback:(CDUnknownBlockType)arg9;
- (id)requestForBinaryWithResponse:(id)arg1 params:(id)arg2 method:(id)arg3 needCommonParams:(_Bool)arg4 callback:(CDUnknownBlockType)arg5;
- (id)requestForBinaryWithURL:(id)arg1 params:(id)arg2 method:(id)arg3 needCommonParams:(_Bool)arg4 callback:(CDUnknownBlockType)arg5;
- (void)setPureChannelForJSONResponseSerializer:(_Bool)arg1;
- (id)requestForJSONWithResponse:(id)arg1 params:(id)arg2 method:(id)arg3 needCommonParams:(_Bool)arg4 requestSerializer:(Class)arg5 responseSerializer:(Class)arg6 autoResume:(_Bool)arg7 callback:(CDUnknownBlockType)arg8;
- (id)requestForJSONWithURL:(id)arg1 params:(id)arg2 method:(id)arg3 needCommonParams:(_Bool)arg4 requestSerializer:(Class)arg5 responseSerializer:(Class)arg6 autoResume:(_Bool)arg7 callback:(CDUnknownBlockType)arg8;
- (id)requestForJSONWithResponse:(id)arg1 params:(id)arg2 method:(id)arg3 needCommonParams:(_Bool)arg4 callback:(CDUnknownBlockType)arg5;
- (id)requestForJSONWithURL:(id)arg1 params:(id)arg2 method:(id)arg3 needCommonParams:(_Bool)arg4 callback:(CDUnknownBlockType)arg5;
- (id)requestModel:(id)arg1 requestSerializer:(Class)arg2 responseSerializer:(Class)arg3 autoResume:(_Bool)arg4 callback:(CDUnknownBlockType)arg5;
- (id)requestModel:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)needCommonParams:(_Bool)arg1;
- (id)pickCommonParams;
- (id)init;

@end

