//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TTRichSpans;

@interface TTRichSpanText : NSObject
{
    NSString *_text;
    TTRichSpans *_richSpans;
}

@property(retain, nonatomic) TTRichSpans *richSpans; // @synthesize richSpans=_richSpans;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)trimmingRightCharactersInSet:(id)arg1;
- (void)trimmingLeftCharactersInSet:(id)arg1;
- (void)trimmingCharactersInSet:(id)arg1;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withText:(id)arg2;
- (void)insertText:(id)arg1 atIndex:(long long)arg2;
- (void)appendText:(id)arg1;
- (void)appendRichSpanText:(id)arg1;
- (id)initWithText:(id)arg1 richSpanLinks:(id)arg2;
- (id)initWithText:(id)arg1 richSpans:(id)arg2;

@end

