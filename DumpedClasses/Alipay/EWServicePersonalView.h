//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EWBaseView.h"

@class EWServiceProviderViewModel, UIImageView, UILabel;

@interface EWServicePersonalView : EWBaseView
{
    UILabel *_nameLabel;
    UIImageView *_genderIcon;
    UIImageView *_creditLevel;
}

@property(retain, nonatomic) UIImageView *creditLevel; // @synthesize creditLevel=_creditLevel;
@property(retain, nonatomic) UIImageView *genderIcon; // @synthesize genderIcon=_genderIcon;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void).cxx_destruct;
- (void)loadData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain, nonatomic) EWServiceProviderViewModel *viewModel;

@end
