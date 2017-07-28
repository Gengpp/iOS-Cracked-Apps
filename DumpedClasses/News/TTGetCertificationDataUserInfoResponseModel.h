//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTResponseModel.h"

@class NSNumber, NSString, TTGetCertificationDataExtraResponseModel;

@interface TTGetCertificationDataUserInfoResponseModel : TTResponseModel
{
    NSNumber *_status;
    NSString *_auth_class_2;
    NSString *_uid;
    NSString *_id_number;
    NSString *_verify_type;
    NSString *_company;
    NSString *_profession;
    NSString *_real_name;
    NSString *_source;
    TTGetCertificationDataExtraResponseModel *_extra;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(retain, nonatomic) TTGetCertificationDataExtraResponseModel *extra; // @synthesize extra=_extra;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *real_name; // @synthesize real_name=_real_name;
@property(copy, nonatomic) NSString *profession; // @synthesize profession=_profession;
@property(copy, nonatomic) NSString *company; // @synthesize company=_company;
@property(copy, nonatomic) NSString *verify_type; // @synthesize verify_type=_verify_type;
@property(copy, nonatomic) NSString *id_number; // @synthesize id_number=_id_number;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(copy, nonatomic) NSString *auth_class_2; // @synthesize auth_class_2=_auth_class_2;
@property(retain, nonatomic) NSNumber *status; // @synthesize status=_status;
- (void).cxx_destruct;

@end

