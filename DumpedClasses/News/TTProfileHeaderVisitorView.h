//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedView.h"

@class NSArray, NSMutableArray, NSString;

@interface TTProfileHeaderVisitorView : SSThemedView
{
    _Bool _separatorEnabled;
    NSString *_separatorColorKey;
    CDUnknownBlockType _didTapButtonCallback;
    NSArray *_models;
    NSMutableArray *_buttons;
    NSMutableArray *_separators;
}

@property(retain, nonatomic) NSMutableArray *separators; // @synthesize separators=_separators;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) NSArray *models; // @synthesize models=_models;
@property(copy, nonatomic) CDUnknownBlockType didTapButtonCallback; // @synthesize didTapButtonCallback=_didTapButtonCallback;
@property(copy, nonatomic) NSString *separatorColorKey; // @synthesize separatorColorKey=_separatorColorKey;
@property(nonatomic) _Bool separatorEnabled; // @synthesize separatorEnabled=_separatorEnabled;
- (void).cxx_destruct;
- (void)reloadModel:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)reloadModels:(id)arg1;
- (id)buttonAtIndex:(unsigned long long)arg1;
- (void)didSelectButton:(id)arg1;
- (void)layoutSubviews;
- (void)relayoutIfNeeded;
- (void)initSubviews;
- (void)dealloc;
- (id)initWithModels:(id)arg1;

@end

