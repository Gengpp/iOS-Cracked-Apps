//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class Coordinate, NSString;

@interface PassengerOrderGetReq : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) Coordinate *coordinate; // @dynamic coordinate;
@property(nonatomic) _Bool hasCoordinate; // @dynamic hasCoordinate;
@property(nonatomic) _Bool hasOid; // @dynamic hasOid;
@property(nonatomic) _Bool hasPhone; // @dynamic hasPhone;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(nonatomic) _Bool hasToken; // @dynamic hasToken;
@property(nonatomic) _Bool hasWait; // @dynamic hasWait;
@property(copy, nonatomic) NSString *oid; // @dynamic oid;
@property(copy, nonatomic) NSString *phone; // @dynamic phone;
@property(nonatomic) int status; // @dynamic status;
@property(copy, nonatomic) NSString *token; // @dynamic token;
@property(copy, nonatomic) NSString *wait; // @dynamic wait;

@end

