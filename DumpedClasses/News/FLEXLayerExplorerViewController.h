//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FLEXObjectExplorerViewController.h"

@class CALayer;

@interface FLEXLayerExplorerViewController : FLEXObjectExplorerViewController
{
}

+ (id)imagePreviewViewControllerForLayer:(id)arg1;
- (id)customSectionDrillInViewControllerForRowCookie:(id)arg1;
- (_Bool)customSectionCanDrillIntoRowWithCookie:(id)arg1;
- (id)customSectionTitleForRowCookie:(id)arg1;
- (id)customSectionRowCookies;
- (id)customSectionTitle;
@property(readonly, nonatomic) CALayer *layerToExplore;

@end

