//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewBase.h"

#import "SSSegmentControlDelegate.h"

@class NSString, SSFeedbackFAQView, SSFeedbackInputButton, SSMyFeedbackView, SSSegmentControl;

@interface SSFeedbackContainerView : SSViewBase <SSSegmentControlDelegate>
{
    SSSegmentControl *_segmentView;
    SSViewBase *_currentView;
    SSMyFeedbackView *_myFeedbackView;
    SSFeedbackFAQView *_FAQView;
    SSFeedbackInputButton *_inputButton;
}

@property(retain, nonatomic) SSFeedbackInputButton *inputButton; // @synthesize inputButton=_inputButton;
@property(retain, nonatomic) SSFeedbackFAQView *FAQView; // @synthesize FAQView=_FAQView;
@property(retain, nonatomic) SSMyFeedbackView *myFeedbackView; // @synthesize myFeedbackView=_myFeedbackView;
@property(retain, nonatomic) SSViewBase *currentView; // @synthesize currentView=_currentView;
@property(retain, nonatomic) SSSegmentControl *segmentView; // @synthesize segmentView=_segmentView;
- (void).cxx_destruct;
- (void)ssSegmentControl:(id)arg1 didSelectAtIndex:(long long)arg2;
- (void)layoutSubviews;
- (void)didDisappear;
- (void)willDisappear;
- (void)didAppear;
- (void)willAppear;
- (void)buildSegmentView;
- (struct CGRect)_segmentFrame;
- (struct CGRect)frameForListView;
- (void)buildListView;
- (struct CGRect)frameForInputButton;
- (void)inputButtonClicked;
- (void)themeChanged:(id)arg1;
- (void)buildInputView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

