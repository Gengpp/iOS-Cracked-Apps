//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TTImagePreviewViewController;

@protocol TTImagePreviewViewControllerDelegate <NSObject>

@optional
- (void)ttImagePreviewViewControllerSelectDidFinish:(TTImagePreviewViewController *)arg1;
- (void)ttImagePreviewViewControllerScrollChange:(TTImagePreviewViewController *)arg1 index:(long long)arg2;
- (void)ttImagePreviewViewControllerSelectChange:(TTImagePreviewViewController *)arg1 index:(long long)arg2;
- (void)ttImagePreviewViewControllerDidDismiss:(TTImagePreviewViewController *)arg1;
@end

