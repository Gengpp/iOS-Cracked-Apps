//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface KTVPitchModel : NSObject
{
    NSMutableArray *_pitchLines;
    NSMutableArray *_pitchLinesStartTime;
}

@property(retain, nonatomic) NSMutableArray *pitchLinesStartTime; // @synthesize pitchLinesStartTime=_pitchLinesStartTime;
@property(retain, nonatomic) NSMutableArray *pitchLines; // @synthesize pitchLines=_pitchLines;
- (void).cxx_destruct;
- (id)numberOfPitchLineForPitchTime:(double)arg1;
- (long long)numberOfIndexOfLineForPitchTime:(double)arg1;
- (id)pitchLineAtIndex:(long long)arg1;
- (long long)countOfPitchLines;
- (id)takeTheLastPitchLine;
- (id)takeTheFirstPitchLine;
- (id)copyWithPitchModel;
- (void)removeAllPitchLine;
- (void)insetAPitchLine:(id)arg1;
- (id)init;

@end

