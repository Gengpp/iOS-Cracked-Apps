//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSSegment.h"

@interface SSFeedbackSegment : SSSegment
{
    int _type;
}

@property(nonatomic) int type; // @synthesize type=_type;
- (void)refreshUI;
- (void)setChecked:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 type:(int)arg2;

@end

