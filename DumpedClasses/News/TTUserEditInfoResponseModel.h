//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTResponseModel.h"

@class NSString<Optional>, TTUserEditInfoDataResponseModel<Optional>;

@interface TTUserEditInfoResponseModel : TTResponseModel
{
    NSString<Optional> *_message;
    TTUserEditInfoDataResponseModel<Optional> *_data;
}

@property(retain, nonatomic) TTUserEditInfoDataResponseModel<Optional> *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString<Optional> *message; // @synthesize message=_message;
- (void).cxx_destruct;

@end

