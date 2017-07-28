//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, TTGroupModel;

@interface TTChatroomMovieViewModel : NSObject
{
    _Bool _shouldNotRemoveAllMovieView;
    _Bool _useSystemPlayer;
    unsigned long long _type;
    TTGroupModel *_gModel;
    NSString *_aID;
    NSArray *_clickTrackURLs;
    NSString *_cID;
    NSString *_logExtra;
    NSString *_gdLabel;
    NSString *_movieTitle;
    unsigned long long _videoPlayType;
    unsigned long long _currentDefinitionType;
    unsigned long long _lastDefinitionType;
}

@property(nonatomic) _Bool useSystemPlayer; // @synthesize useSystemPlayer=_useSystemPlayer;
@property(nonatomic) _Bool shouldNotRemoveAllMovieView; // @synthesize shouldNotRemoveAllMovieView=_shouldNotRemoveAllMovieView;
@property(nonatomic) unsigned long long lastDefinitionType; // @synthesize lastDefinitionType=_lastDefinitionType;
@property(nonatomic) unsigned long long currentDefinitionType; // @synthesize currentDefinitionType=_currentDefinitionType;
@property(nonatomic) unsigned long long videoPlayType; // @synthesize videoPlayType=_videoPlayType;
@property(copy, nonatomic) NSString *movieTitle; // @synthesize movieTitle=_movieTitle;
@property(copy, nonatomic) NSString *gdLabel; // @synthesize gdLabel=_gdLabel;
@property(copy, nonatomic) NSString *logExtra; // @synthesize logExtra=_logExtra;
@property(copy, nonatomic) NSString *cID; // @synthesize cID=_cID;
@property(retain, nonatomic) NSArray *clickTrackURLs; // @synthesize clickTrackURLs=_clickTrackURLs;
@property(copy, nonatomic) NSString *aID; // @synthesize aID=_aID;
@property(retain, nonatomic) TTGroupModel *gModel; // @synthesize gModel=_gModel;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

