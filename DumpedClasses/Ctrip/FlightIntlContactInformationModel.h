//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface FlightIntlContactInformationModel : CTBusinessBean
{
    NSString *contactName;
    int contactPhoneType;
    NSString *contactPhone;
    NSString *email;
    NSString *contactCardNumber;
}

@property(copy, nonatomic) NSString *contactCardNumber; // @synthesize contactCardNumber;
@property(copy, nonatomic) NSString *email; // @synthesize email;
@property(copy, nonatomic) NSString *contactPhone; // @synthesize contactPhone;
@property(nonatomic) int contactPhoneType; // @synthesize contactPhoneType;
@property(copy, nonatomic) NSString *contactName; // @synthesize contactName;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

