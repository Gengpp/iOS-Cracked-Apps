//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedView.h"

@class SSThemedLabel;

@interface TTAdCanvasBaseCell : SSThemedView
{
    id <TTAdCanvasBaseCellDelegate> _delegate;
    double _constrainWidth;
    double _cellHeight;
    SSThemedLabel *_backLabel;
}

+ (double)heightForModel:(id)arg1 inWidth:(double)arg2;
@property(retain, nonatomic) SSThemedLabel *backLabel; // @synthesize backLabel=_backLabel;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) double constrainWidth; // @synthesize constrainWidth=_constrainWidth;
@property(nonatomic) __weak id <TTAdCanvasBaseCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)cellBreakByEvent;
- (void)cellResumeByEvent;
- (void)cellPauseByEvent;
- (void)cellAnimateToTop;
- (void)cellMediaPlay:(id)arg1;
- (void)scrollView:(id)arg1 lastOffset:(double)arg2 itemInCritical:(id)arg3 orientation:(unsigned long long)arg4 itemIndex:(long long)arg5;
- (void)scrollView:(id)arg1 item:(id)arg2 itemIndex:(long long)arg3;
- (void)canvasCell:(id)arg1 showStatus:(unsigned long long)arg2 itemIndex:(long long)arg3;
- (void)refreshWithModel:(id)arg1;
- (void)setBackLabelColor:(id)arg1;
- (void)createSubview;
- (id)initWithWidth:(double)arg1;
- (void)dealloc;

@end

