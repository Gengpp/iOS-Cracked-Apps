//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTEntityBase.h"

@class NSString;

@interface ArticleDetail : TTEntityBase
{
    NSString *_primaryID;
    NSString *_content;
    double _updateTime;
}

+ (void)cleanEntities;
+ (id)persistentProperties;
+ (id)primaryKey;
+ (id)dbName;
@property(nonatomic) double updateTime; // @synthesize updateTime=_updateTime;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *primaryID; // @synthesize primaryID=_primaryID;
- (void).cxx_destruct;

@end

