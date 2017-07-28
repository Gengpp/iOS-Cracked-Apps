//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class AMapGeoPoint, NSString;

@interface AMapStreetNumber : AMapSearchObject
{
    NSString *_street;
    NSString *_number;
    AMapGeoPoint *_location;
    long long _distance;
    NSString *_direction;
}

+ (id)ajo_mapping;
@property(copy, nonatomic) NSString *direction; // @synthesize direction=_direction;
@property(nonatomic) long long distance; // @synthesize distance=_distance;
@property(copy, nonatomic) AMapGeoPoint *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *number; // @synthesize number=_number;
@property(copy, nonatomic) NSString *street; // @synthesize street=_street;
- (void).cxx_destruct;
- (_Bool)ajo_validateValue:(inout id *)arg1 forKey:(id)arg2 error:(out id *)arg3;

@end

