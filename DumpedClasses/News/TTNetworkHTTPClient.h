//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFHTTPSessionManager.h"

@interface TTNetworkHTTPClient : AFHTTPSessionManager
{
}

+ (id)getInstance;
+ (id)shareNetworkClient;
- (id)requestForBinaryWithURL:(id)arg1 params:(id)arg2 method:(id)arg3 commonParams:(id)arg4 headerField:(id)arg5 requestSerializer:(Class)arg6 responseSerializer:(Class)arg7 responsePreprocessor:(Class)arg8 callback:(CDUnknownBlockType)arg9 callbackWithResponse:(CDUnknownBlockType)arg10;
- (id)requestForJSONWithURL:(id)arg1 params:(id)arg2 method:(id)arg3 commonParams:(id)arg4 pureChannelForJSONResponseSerializer:(_Bool)arg5 requestSerializer:(Class)arg6 responseSerializer:(Class)arg7 responsePreprocessor:(Class)arg8 callback:(CDUnknownBlockType)arg9 callbackWithResponse:(CDUnknownBlockType)arg10;
- (id)requestModel:(id)arg1 commonParams:(id)arg2 requestSerializer:(Class)arg3 responseSerializer:(Class)arg4 responsePreprocessor:(Class)arg5 callback:(CDUnknownBlockType)arg6;
- (id)transformedErrorFrom:(id)arg1;
- (id)_dataTaskWithRequest:(id)arg1 responsePreprocessor:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithBaseURL:(id)arg1 sessionConfiguration:(id)arg2;

@end

