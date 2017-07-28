//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedView.h"

@class SSThemedButton, SSThemedScrollView;

@interface WDPostQuestionInputDescToolView : SSThemedView
{
    _Bool _isAnimating;
    _Bool _keyBoardIsHidden;
    CDUnknownBlockType _addPictureHandler;
    CDUnknownBlockType _hideKeyboardHandler;
    SSThemedScrollView *_scrollView;
    SSThemedView *_toolsContainer;
    SSThemedButton *_hidKeyboardButton;
    SSThemedButton *_insertImageButton;
}

@property(nonatomic) _Bool keyBoardIsHidden; // @synthesize keyBoardIsHidden=_keyBoardIsHidden;
@property(retain, nonatomic) SSThemedButton *insertImageButton; // @synthesize insertImageButton=_insertImageButton;
@property(retain, nonatomic) SSThemedButton *hidKeyboardButton; // @synthesize hidKeyboardButton=_hidKeyboardButton;
@property(retain, nonatomic) SSThemedView *toolsContainer; // @synthesize toolsContainer=_toolsContainer;
@property(retain, nonatomic) SSThemedScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(copy, nonatomic) CDUnknownBlockType hideKeyboardHandler; // @synthesize hideKeyboardHandler=_hideKeyboardHandler;
@property(copy, nonatomic) CDUnknownBlockType addPictureHandler; // @synthesize addPictureHandler=_addPictureHandler;
- (void).cxx_destruct;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)addPhoto;
- (void)hidekeyboard;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

