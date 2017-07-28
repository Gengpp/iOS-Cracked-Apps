//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSADBaseModel.h"

@class NSDictionary, NSNumber, NSString, TTImageInfosModel;

@interface SSEmbedADModel : SSADBaseModel
{
    _Bool _needPreload;
    NSDictionary *_taobaoPromoter;
    NSString *_html;
    NSNumber *_displayDuration;
    NSNumber *_hideIfExist;
    unsigned long long _displayType;
    NSString *_displayImage;
    NSNumber *_imageHeight;
    NSNumber *_imageWidth;
    NSString *_promoteText;
    NSString *_buttonText;
    NSString *_detailText;
    TTImageInfosModel *_imageModel;
    double _cellHeight;
}

@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(retain, nonatomic) TTImageInfosModel *imageModel; // @synthesize imageModel=_imageModel;
@property(retain, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(retain, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(retain, nonatomic) NSString *promoteText; // @synthesize promoteText=_promoteText;
@property(retain, nonatomic) NSNumber *imageWidth; // @synthesize imageWidth=_imageWidth;
@property(retain, nonatomic) NSNumber *imageHeight; // @synthesize imageHeight=_imageHeight;
@property(retain, nonatomic) NSString *displayImage; // @synthesize displayImage=_displayImage;
@property(nonatomic) unsigned long long displayType; // @synthesize displayType=_displayType;
@property(retain, nonatomic) NSNumber *hideIfExist; // @synthesize hideIfExist=_hideIfExist;
@property(retain, nonatomic) NSNumber *displayDuration; // @synthesize displayDuration=_displayDuration;
@property(nonatomic) _Bool needPreload; // @synthesize needPreload=_needPreload;
@property(retain, nonatomic) NSString *html; // @synthesize html=_html;
@property(retain, nonatomic) NSDictionary *taobaoPromoter; // @synthesize taobaoPromoter=_taobaoPromoter;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (void)dealloc;

@end

