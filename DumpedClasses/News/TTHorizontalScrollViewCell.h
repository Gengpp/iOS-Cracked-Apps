//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewBase.h"

@class NSString;

@interface TTHorizontalScrollViewCell : SSViewBase
{
    _Bool _isCurrentDisplayCell;
    id <TTHorizontalScrollViewCellDelegate> _delegate;
    unsigned long long _index;
    NSString *_reuseIdentifier;
    NSString *_enterType;
}

@property(retain, nonatomic) NSString *enterType; // @synthesize enterType=_enterType;
@property(nonatomic) _Bool isCurrentDisplayCell; // @synthesize isCurrentDisplayCell=_isCurrentDisplayCell;
@property(retain, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(nonatomic) __weak id <TTHorizontalScrollViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)contentView;
- (void)parentViewWillBeginDragging;
- (void)isCurrentDisplayWhenEndDecelerating:(_Bool)arg1;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)dealloc;

@end

