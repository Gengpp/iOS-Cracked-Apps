//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTResponseModel.h"

@class NSNumber, NSString, NSString<Optional>;

@interface WDWendaCommitPostquestionResponseModel : TTResponseModel
{
    NSNumber *_err_no;
    NSString<Optional> *_err_tips;
    NSString *_qid;
    NSString<Optional> *_schema;
}

@property(retain, nonatomic) NSString<Optional> *schema; // @synthesize schema=_schema;
@property(retain, nonatomic) NSString *qid; // @synthesize qid=_qid;
@property(retain, nonatomic) NSString<Optional> *err_tips; // @synthesize err_tips=_err_tips;
@property(retain, nonatomic) NSNumber *err_no; // @synthesize err_no=_err_no;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

