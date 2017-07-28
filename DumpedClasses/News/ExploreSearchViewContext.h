//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ExploreSearchViewContext : NSObject
{
    _Bool _showNavigationBar;
    int _searchFromType;
    unsigned long long _searchViewType;
    NSString *_from;
    NSString *_defaultQuery;
    NSString *_apiParam;
    NSString *_curTab;
}

@property(copy, nonatomic) NSString *curTab; // @synthesize curTab=_curTab;
@property(copy, nonatomic) NSString *apiParam; // @synthesize apiParam=_apiParam;
@property(copy, nonatomic) NSString *defaultQuery; // @synthesize defaultQuery=_defaultQuery;
@property(copy, nonatomic) NSString *from; // @synthesize from=_from;
@property(nonatomic) int searchFromType; // @synthesize searchFromType=_searchFromType;
@property(nonatomic) unsigned long long searchViewType; // @synthesize searchViewType=_searchViewType;
@property(nonatomic) _Bool showNavigationBar; // @synthesize showNavigationBar=_showNavigationBar;
- (void).cxx_destruct;

@end

