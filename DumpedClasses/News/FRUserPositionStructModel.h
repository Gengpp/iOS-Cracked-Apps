//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FRBaseModel.h"

@class NSNumber, NSString;

@interface FRUserPositionStructModel : FRBaseModel
{
    NSNumber *_start;
    NSNumber *_end;
    NSString *_schema;
}

@property(retain, nonatomic) NSString *schema; // @synthesize schema=_schema;
@property(retain, nonatomic) NSNumber *end; // @synthesize end=_end;
@property(retain, nonatomic) NSNumber *start; // @synthesize start=_start;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

