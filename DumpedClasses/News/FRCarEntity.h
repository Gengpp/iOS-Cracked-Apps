//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;

@interface FRCarEntity : JSONModel
{
    NSString *_carSeries;
    NSString *_carType;
    NSString *_country;
    NSString *_oilConsume;
    NSString *_price;
    NSString *_coverUrl;
    long long _imageNum;
    NSString *_imageOpenUrl;
    NSString *_openUrl;
    NSString *_brand;
    NSString *_priceUrl;
}

+ (id)keyMapper;
@property(copy, nonatomic) NSString *priceUrl; // @synthesize priceUrl=_priceUrl;
@property(copy, nonatomic) NSString *brand; // @synthesize brand=_brand;
@property(copy, nonatomic) NSString *openUrl; // @synthesize openUrl=_openUrl;
@property(copy, nonatomic) NSString *imageOpenUrl; // @synthesize imageOpenUrl=_imageOpenUrl;
@property(nonatomic) long long imageNum; // @synthesize imageNum=_imageNum;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *oilConsume; // @synthesize oilConsume=_oilConsume;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(copy, nonatomic) NSString *carType; // @synthesize carType=_carType;
@property(copy, nonatomic) NSString *carSeries; // @synthesize carSeries=_carSeries;
- (void).cxx_destruct;

@end

