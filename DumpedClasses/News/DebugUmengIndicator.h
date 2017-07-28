//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ArticleListNotifyBarView, NSMutableArray, NSTimer, UIWindow;

@interface DebugUmengIndicator : NSObject
{
    _Bool _startDisplay;
    NSMutableArray *_strings;
    NSTimer *_timer;
    ArticleListNotifyBarView *_indicatorView;
    UIWindow *_window;
}

+ (void)setDisplayUmengIsOn:(_Bool)arg1;
+ (_Bool)displayUmengISOn;
+ (id)sharedIndicator;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) ArticleListNotifyBarView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSMutableArray *strings; // @synthesize strings=_strings;
- (void).cxx_destruct;
- (void)stopDisplay;
- (void)startDisplay;
- (void)startTimer;
- (void)addDisplayString:(id)arg1;
- (void)timer:(id)arg1;
- (id)init;
- (void)dealloc;

@end

