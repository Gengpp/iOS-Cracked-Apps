//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewBase.h"

@class NSArray, NSMutableArray, UIView;

@interface ExploreCommentTagView : SSViewBase
{
    UIView *containerView;
    NSMutableArray *buttons;
    long long seletedIndex;
    NSArray *_tagItems;
    id <ExploreCommentTagViewDelegate> _delegate;
}

@property(nonatomic) __weak id <ExploreCommentTagViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *tagItems; // @synthesize tagItems=_tagItems;
- (void).cxx_destruct;
- (void)highlightSelectedButtonAtIndex:(long long)arg1;
- (void)tagButton:(id)arg1;
- (struct CGRect)frameOfButtonAtIndex:(long long)arg1;
- (void)themeChanged:(id)arg1;
- (void)buildViews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 tagItems:(id)arg2;

@end

