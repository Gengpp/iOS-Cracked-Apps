//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

@class NSMutableDictionary;

@interface ArticleTableView : UITableView
{
    NSMutableDictionary *_classIdentifier;
}

@property(retain, nonatomic) NSMutableDictionary *classIdentifier; // @synthesize classIdentifier=_classIdentifier;
- (void).cxx_destruct;
- (id)dequeueReusableCellWithIdentifier:(id)arg1;
- (void)registerClass:(Class)arg1 forCellReuseIdentifier:(id)arg2;
- (void)dealloc;

@end

