//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCTComponent.h"

@class NSDictionary, NSMutableArray, NSNumber, NSString, UIColor;

@interface RCTShadowView : NSObject <RCTComponent>
{
    unsigned long long _propagationLifecycle;
    unsigned long long _textLifecycle;
    NSDictionary *_lastParentProperties;
    NSMutableArray *_reactSubviews;
    _Bool _recomputePadding;
    _Bool _recomputeMargin;
    _Bool _recomputeBorder;
    _Bool _didUpdateSubviews;
    float _paddingMetaProps[7];
    float _marginMetaProps[7];
    float _borderMetaProps[7];
    _Bool _newView;
    _Bool _hidden;
    NSNumber *_reactTag;
    RCTShadowView *_superview;
    struct CSSNode *_cssNode;
    NSString *_viewName;
    UIColor *_backgroundColor;
    CDUnknownBlockType _onLayout;
    double _flex;
    long long _zIndex;
    struct CGRect _frame;
}

@property(nonatomic) long long zIndex; // @synthesize zIndex=_zIndex;
@property(nonatomic) double flex; // @synthesize flex=_flex;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic, getter=isNewView) _Bool newView; // @synthesize newView=_newView;
@property(copy, nonatomic) CDUnknownBlockType onLayout; // @synthesize onLayout=_onLayout;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) NSString *viewName; // @synthesize viewName=_viewName;
@property(readonly, nonatomic) struct CSSNode *cssNode; // @synthesize cssNode=_cssNode;
@property(readonly, nonatomic) __weak RCTShadowView *superview; // @synthesize superview=_superview;
@property(copy, nonatomic) NSNumber *reactTag; // @synthesize reactTag=_reactTag;
- (void).cxx_destruct;
- (void)didSetProps:(id)arg1;
- (void)didUpdateReactSubviews;
@property(nonatomic) int overflow;
@property(nonatomic) int flexWrap;
@property(nonatomic) int position;
@property(nonatomic) int alignItems;
@property(nonatomic) int alignSelf;
@property(nonatomic) int justifyContent;
@property(nonatomic) int flexDirection;
@property(nonatomic) double flexBasis;
@property(nonatomic) double flexShrink;
@property(nonatomic) double flexGrow;
- (void)setSize:(struct CGSize)arg1;
- (void)setTopLeft:(struct CGPoint)arg1;
- (void)setIntrinsicContentSize:(struct CGSize)arg1;
@property(nonatomic) double left;
@property(nonatomic) double bottom;
@property(nonatomic) double right;
@property(nonatomic) double top;
@property(nonatomic) double maxHeight;
@property(nonatomic) double maxWidth;
@property(nonatomic) double minHeight;
@property(nonatomic) double minWidth;
@property(nonatomic) double height;
@property(nonatomic) double width;
@property(nonatomic) double borderRightWidth;
@property(nonatomic) double borderBottomWidth;
@property(nonatomic) double borderLeftWidth;
@property(nonatomic) double borderTopWidth;
@property(nonatomic) double borderWidth;
- (struct UIEdgeInsets)paddingAsInsets;
@property(nonatomic) double paddingRight;
@property(nonatomic) double paddingBottom;
@property(nonatomic) double paddingLeft;
@property(nonatomic) double paddingTop;
@property(nonatomic) double paddingHorizontal;
@property(nonatomic) double paddingVertical;
@property(nonatomic) double padding;
@property(nonatomic) double marginRight;
@property(nonatomic) double marginBottom;
@property(nonatomic) double marginLeft;
@property(nonatomic) double marginTop;
@property(nonatomic) double marginHorizontal;
@property(nonatomic) double marginVertical;
@property(nonatomic) double margin;
- (id)recursiveDescription;
- (void)addRecursiveDescriptionToString:(id)arg1 atLevel:(unsigned long long)arg2;
@property(readonly, copy) NSString *description;
- (id)reactTagAtPoint:(struct CGPoint)arg1;
- (id)reactSuperview;
- (id)reactSubviews;
- (void)removeReactSubview:(id)arg1;
- (void)insertReactSubview:(id)arg1 atIndex:(long long)arg2;
- (void)setTextComputed;
- (_Bool)isTextDirty;
- (void)dirtyText;
- (_Bool)isPropagationDirty;
- (void)dirtyPropagation;
- (_Bool)isCSSLeafNode;
- (void)dealloc;
- (_Bool)isReactRootView;
- (id)init;
- (_Bool)viewIsDescendantOf:(id)arg1;
- (struct CGRect)measureLayoutRelativeToAncestor:(id)arg1;
- (void)collectUpdatedFrames:(id)arg1 withFrame:(struct CGRect)arg2 hidden:(_Bool)arg3 absolutePosition:(struct CGPoint)arg4;
- (void)collectUpdatedProperties:(id)arg1 parentProperties:(id)arg2;
- (id)processUpdatedProperties:(id)arg1 parentProperties:(id)arg2;
- (void)applyLayoutToChildren:(struct CSSNode *)arg1 viewsWithNewFrame:(id)arg2 absolutePosition:(struct CGPoint)arg3;
- (void)applyLayoutNode:(struct CSSNode *)arg1 viewsWithNewFrame:(id)arg2 absolutePosition:(struct CGPoint)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

