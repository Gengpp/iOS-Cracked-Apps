//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTRequestModel.h"

@class NSString, NSString<Optional>;

@interface WDWendaCommitIgnorequestionRequestModel : TTRequestModel
{
    NSString *_qid;
    NSString<Optional> *_api_param;
}

@property(retain, nonatomic) NSString<Optional> *api_param; // @synthesize api_param=_api_param;
@property(retain, nonatomic) NSString *qid; // @synthesize qid=_qid;
- (void).cxx_destruct;
- (id)_requestParams;
- (id)init;

@end

