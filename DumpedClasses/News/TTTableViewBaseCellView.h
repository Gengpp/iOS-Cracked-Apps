//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ExploreCellViewBase.h"

@class ExploreOrderedData, ExploreOriginalData;

@interface TTTableViewBaseCellView : ExploreCellViewBase
{
    ExploreOrderedData *_orderedData;
    ExploreOriginalData *_originalData;
}

@property(retain, nonatomic) ExploreOriginalData *originalData; // @synthesize originalData=_originalData;
@property(retain, nonatomic) ExploreOrderedData *orderedData; // @synthesize orderedData=_orderedData;
- (void).cxx_destruct;
- (void)refreshDone;
- (_Bool)shouldRefresh;
- (id)cellData;
- (unsigned long long)refer;

@end

