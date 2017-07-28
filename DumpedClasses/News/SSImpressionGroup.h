//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface SSImpressionGroup : NSObject <NSCoding>
{
    NSString *_keyName;
    unsigned long long _listType;
    NSString *_sessionID;
    NSDictionary *_extra;
    NSMutableDictionary *_impressionModels;
    NSString *_groupPrimaryKey;
}

+ (id)genImpressionModelPrimaryKeyForKeyName:(id)arg1 itemType:(unsigned long long)arg2 sessionID:(id)arg3;
@property(retain, nonatomic) NSString *groupPrimaryKey; // @synthesize groupPrimaryKey=_groupPrimaryKey;
@property(retain, nonatomic) NSMutableDictionary *impressionModels; // @synthesize impressionModels=_impressionModels;
@property(retain, nonatomic) NSDictionary *extra; // @synthesize extra=_extra;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned long long listType; // @synthesize listType=_listType;
@property(retain, nonatomic) NSString *keyName; // @synthesize keyName=_keyName;
- (void).cxx_destruct;
- (void)enterGroup;
- (void)leaveGroup;
- (void)addImpressionModel:(id)arg1;
- (id)parseToDict;
- (void)reuseImpressionGroup:(id)arg1;
- (id)fetchImpressionModelForItemID:(id)arg1 itemType:(unsigned long long)arg2;
- (id)fetchOrGenImpressionModelForItemID:(id)arg1 itemType:(unsigned long long)arg2;
- (id)primaryKey;
- (id)initWithKeyName:(id)arg1 itemType:(unsigned long long)arg2 sessionID:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

