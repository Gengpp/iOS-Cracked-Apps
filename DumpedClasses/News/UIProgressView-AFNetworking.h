//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIProgressView.h"

@interface UIProgressView (AFNetworking)
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setProgressWithDownloadProgressOfOperation:(id)arg1 animated:(_Bool)arg2;
- (void)setProgressWithUploadProgressOfOperation:(id)arg1 animated:(_Bool)arg2;
- (void)af_setDownloadProgressAnimated:(_Bool)arg1;
- (_Bool)af_downloadProgressAnimated;
- (void)af_setUploadProgressAnimated:(_Bool)arg1;
- (_Bool)af_uploadProgressAnimated;
@end

