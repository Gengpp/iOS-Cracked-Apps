//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FLEXArgumentInputView.h"

@interface FLEXArgumentInputFontView : FLEXArgumentInputView
{
    FLEXArgumentInputView *_fontNameInput;
    FLEXArgumentInputView *_pointSizeInput;
}

+ (_Bool)supportsObjCType:(const char *)arg1 withCurrentValue:(id)arg2;
+ (double)verticalPaddingBetweenFields;
@property(retain, nonatomic) FLEXArgumentInputView *pointSizeInput; // @synthesize pointSizeInput=_pointSizeInput;
@property(retain, nonatomic) FLEXArgumentInputView *fontNameInput; // @synthesize fontNameInput=_fontNameInput;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)inputViewIsFirstResponder;
- (id)inputValue;
- (void)setInputValue:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithArgumentTypeEncoding:(const char *)arg1;

@end

