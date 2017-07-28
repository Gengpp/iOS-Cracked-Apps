//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ALBBURLMergable.h"

@class NSArray, NSString;

@interface ALBBURLMatcher : NSObject <ALBBURLMergable>
{
    NSString *_name;
    NSString *_type;
    NSArray *_values;
    CDUnknownBlockType _block;
}

+ (id)matcherWithBlock:(CDUnknownBlockType)arg1;
+ (id)containPattern;
+ (id)pattern;
+ (id)equal;
+ (id)contain;
+ (id)end;
+ (id)start;
+ (id)matcherWithType:(id)arg1;
+ (id)matchersWithRules:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(copy, nonatomic) NSArray *values; // @synthesize values=_values;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)mergeWithLatest:(id)arg1;
- (id)mergableIdentifier;
- (_Bool)matchesURL:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
- (id)values:(id)arg1;
- (id)name:(id)arg1;
- (id)generateName;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

