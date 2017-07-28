//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WDActionSheetProtocol.h"

@class NSString;

@interface WDActionSheetObject : NSObject <WDActionSheetProtocol>
{
    _Bool _couldSelected;
    _Bool _selected;
    NSString *_text;
    NSString *_selectedText;
    NSString *_textColorThemeKey;
    NSString *_selectedTextColorThemeKey;
}

@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) _Bool couldSelected; // @synthesize couldSelected=_couldSelected;
@property(copy, nonatomic) NSString *selectedTextColorThemeKey; // @synthesize selectedTextColorThemeKey=_selectedTextColorThemeKey;
@property(copy, nonatomic) NSString *textColorThemeKey; // @synthesize textColorThemeKey=_textColorThemeKey;
@property(copy, nonatomic) NSString *selectedText; // @synthesize selectedText=_selectedText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

