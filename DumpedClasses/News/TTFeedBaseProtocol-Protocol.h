//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ExploreCellBase, NSIndexPath, TTFeedSectionHeaderFooterControl;

@protocol TTFeedBaseProtocol <NSObject>
- (void)didSelectCellAtIndexPath:(NSIndexPath *)arg1 isSelected:(_Bool)arg2;

@optional
- (void)didGenerateCell:(ExploreCellBase *)arg1 atIndexPath:(NSIndexPath *)arg2;
- (double)sectionFooterControlHeightForSection:(unsigned long long)arg1;
- (TTFeedSectionHeaderFooterControl *)sectionFooterControlForSection:(unsigned long long)arg1;
- (double)sectionHeaderControlHeightForSection:(unsigned long long)arg1;
- (TTFeedSectionHeaderFooterControl *)sectionHeaderControlForSection:(unsigned long long)arg1;
@end

